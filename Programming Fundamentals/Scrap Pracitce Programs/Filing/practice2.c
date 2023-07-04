#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
// 11.12
void new_file(char* str);
void read_file(char* str);
void new_rec(char* str);
void up_rec(char* str);
void del_rec(char* str);
struct hardwares {
		int id; char name[50]; int qnty; double cost;
};
	
void main () {
	
	int ans;
	char str[20], neww[20];
	
	while (1) {
		system("cls");
		printf("\n%50s\n\n", "WELCOME TO THE HARDWARE STORE");
		printf(" Choose an action:\n");
		printf(" 1 >>> Create a new file\n");
		printf(" 2 >>> Print an existing file\n");
		printf(" 3 >>> Add a record\n");
		printf(" 4 >>> Update a record\n");
		printf(" 5 >>> Delete a record\n");
		printf(" 6 >>> Rename a file\n");
		printf(" 7 >>> Delete a File\n");
		printf(" 8 >>> Skip\n");
		printf(" Your answer >>> ");
		scanf("%d", &ans);
		
		switch (ans) {
			case 1:
				printf("\n Write the name of your file >>> ");
				fflush(stdin); gets(str);
				new_file(str);
				getchar();
				break;
			case 2:
				printf("\n Write the name of your file >>> ");
				fflush(stdin); gets(str);
				read_file(str);
				getchar();
				break;
			case 3:
				printf("\n Write the name of your file >>> ");
				fflush(stdin); gets(str);
				new_rec(str);
				getchar();
				break;
			case 4:
				printf("\n Write the name of your file >>> ");
				fflush(stdin); gets(str);
				up_rec(str);
				getchar();
				break;
			case 5:
				printf("\n Write the name of your file >>> ");
				fflush(stdin); gets(str);
				del_rec(str);
				getchar();
				break;
			case 6:
				printf("\n Write the current name of your file >>> ");
				fflush(stdin); gets(str);
				printf("\n Write the new name of your file >>> ");
				fflush(stdin); gets(neww);
				if (rename(str, neww))
					printf(" Unable to rename your file\n");
				else
					printf(" Renamed Successfully\n");
				getchar();
				break;
			case 7:
				printf("\n Write the name of your file >>> ");
				fflush(stdin); gets(str);
				if (remove(str))
					printf(" Unable to remove your file\n");
				else
					printf(" File removed successfully\n");
				getchar();
				break;
			default:
			case 8:
				exit(1);
		}
	}
	
	
	
}

void new_file(char str[]) {
	
	int n, i;
	FILE *fp = fopen(str, "wb");
	if (fp == NULL) {
		puts(" Unable to create file");
		return;
	}
	printf(" File created\n Enter the number of records >>> ");
	scanf("%d", &n);
	struct hardwares items[n];
	
	for (i=0; i<n; i++) {
		printf("\n FOR ITEM # %d\n", i+1);
		printf(" Enter ID >>> "); scanf("%d", &items[i].id); fflush(stdin);
		printf(" Enter name >>> "); gets(items[i].name); fflush(stdin);
		printf(" Enter quantity >>> "); scanf("%d", &items[i].qnty); fflush(stdin);
		printf(" Enter cost >>> "); scanf("%lf", &items[i].cost); fflush(stdin);
		fwrite(&items[i], sizeof(struct hardwares), 1, fp);
	}
	puts("\n File successfully populated\n");
	fclose(fp);
}

void read_file(char str[]) {

	int n = 0, i;
	struct hardwares read;
	
	FILE *fp = fopen(str, "rb");
	if (fp == NULL) {
		puts(" Unable to open file");
		return;
	}
	
	printf(" Reading....\n\n");
	rewind(fp);
	while (!feof(fp)) {
		fread(&read, sizeof(struct hardwares), 1, fp);
		n++;
	}
	
	printf("%5s%15s%10s%10s\n\n", "ID", "NAME","QUANTITY", "COST");
	rewind(fp);
	for (i=1; i<n; i++) {
		fread(&read, sizeof(struct hardwares), 1, fp);
		printf("%5d%15s%10d%10.3lf\n", read.id, read.name, read.qnty, read.cost);
	}	
	fclose(fp);
}

void new_rec(char str[]) {

	int n = 0;
	struct hardwares read;
	
	FILE *fp = fopen (str, "ab");
	if (fp == NULL) {
		puts(" Unable to open file");
		return;
	}

	printf("\n NEW RECORD: \n");
	printf(" Enter ID >>> "); scanf("%d", &read.id); fflush(stdin);
	printf(" Enter name >>> "); gets(read.name); fflush(stdin);
	printf(" Enter quantity >>> "); scanf("%d", &read.qnty); fflush(stdin);
	printf(" Enter cost >>> "); scanf("%lf", &read.cost); fflush(stdin);
	fwrite(&read, sizeof(struct hardwares), 1, fp);
	fclose(fp);
}

void up_rec(char str[]) {

	int n = 0, key, i , j;
	read_file(str);
	puts("\n");
	struct hardwares read;
	
	FILE *fp = fopen (str, "rb+");
	if (fp == NULL) {
		puts(" Unable to open file");
		return;
	}	
	rewind(fp);
	while (!feof(fp)) {
		fread(&read, sizeof(struct hardwares), 1, fp);
		n++;
	}
	
	printf(" Which record ID do you want to update >>> ");
	scanf("%d", &key);	
	rewind(fp);
	
	for (i=1; i<n; i++) {
		fread(&read, sizeof(struct hardwares), 1, fp);
		if (read.id == key) {
			printf("\n NEW RECORD: \n");
			printf(" Enter ID >>> "); scanf("%d", &read.id); fflush(stdin);
			printf(" Enter name >>> "); gets(read.name); fflush(stdin);
			printf(" Enter quantity >>> "); scanf("%d", &read.qnty); fflush(stdin);
			printf(" Enter cost >>> "); scanf("%lf", &read.cost); fflush(stdin);
		
			fseek(fp, (i-1)*sizeof(struct hardwares), SEEK_SET);
			fwrite(&read, sizeof(struct hardwares), 1, fp);
			fclose(fp);
			break;
		}
	}
	fclose(fp);
}

void del_rec(char str[]) {
	int n = 0, i, key;
	read_file(str);
	puts("\n");
	struct hardwares read;
	
	FILE *fp = fopen (str, "rb+");
	if (fp == NULL) {
		puts(" Unable to open file");
		return;
	}
	
	rewind(fp);
	while (!feof(fp)) {
		fread(&read, sizeof(struct hardwares), 1, fp);
		n++;
	}
	printf(" Which record ID do you want to delete >>> ");
	scanf("%d", &key);
	 
	char tmp[3] = "TMP";
	FILE *temp = fopen(tmp, "wb");
	if (temp == NULL) {
		puts(" Deletion interupted");
		return;
	}
	printf(" Deleting record...\n");
	rewind(fp);
	for (i=0; i<n-1; i++) {
		fread(&read, sizeof(struct hardwares), 1, fp);
		if (read.id != key)
			fwrite(&read, sizeof(struct hardwares), 1, temp);
	}

	fclose(fp);
	remove(str);
	fclose(temp);
   	if(rename(tmp, str))
      printf(" We encountered an error. Your file is renamed as \"TMP\" now \n");
	printf(" Record deleted..\n");
	getchar(); fflush(stdin);
}























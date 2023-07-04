#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>
FILE *fp_cus;
struct Customer_info
{
	char customer_name[150];
	int customer_id;
	int cusotmer_age;
	char customer_gender;
	char customer_area[50];
} customer;

void Add_new_cusotmer();
void company_heading();
void Admin_panel_heading();
void View_existing_customers();
void Customer_Data_breakdown_age();
void Customer_data_breakdown_gender();

int main()
{
	int choice;
	system("cls");
	printf("\t\tChoose an option from the list.\n\n\t\t01)Add new customer Data.\n\n\t\t02)View existing Customers\n\n\t\t03)Get customer data breakdown based on age.\n\n\t\t04)Customer data based on gender demographics.\n\n\t\t05)To exit the program\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		Add_new_cusotmer();

	case 2:
		View_existing_customers();

	case 3:
		Customer_Data_breakdown_age();

	case 4:
	Customer_data_breakdown_gender();

	case 5:
	exit(0);
	}
}

void Add_new_cusotmer()
{
	company_heading();
	int id;
	Admin_panel_heading();
	printf("\n\t\t     ***** Current Selection: Adding new customer data *****");
	fp_cus = fopen("customer_database.txt", "ab+");
	fflush(stdin);
	printf("\n\n\nEnter customer ID: \n");
	scanf("%d", &id);
	while (fread(&customer, sizeof(customer), 1, fp_cus) == 1)
	{
		if (customer.customer_id == id)
		{
			printf("This ID is alrady occupied by an existing customer please select a valid ID\n");
			printf("Press any key to continue...\n");
			getch();
			Add_new_cusotmer();
		}
	}
	customer.customer_id = id;
	printf("Enter the name of the customer: \n");
	fflush(stdin);
	gets(customer.customer_name);
	printf("Enter the age of the customer: \n");
	fflush(stdin);
	scanf("%d", &customer.cusotmer_age);
	printf("Enter the gender of the customer (M for male and F for female): \n");
	fflush(stdin);
	scanf("%c", &customer.customer_gender);
	printf("Enter the area name of the customer: \n");
	fflush(stdin);
	gets(customer.customer_area);
	fwrite(&customer, sizeof(customer), 1, fp_cus);
	printf("Press any key to return to the previous menu\n");
	getch();
	fclose(fp_cus);
	customers_panel();
}

void View_existing_customers()
{
	company_heading();
	Admin_panel_heading();
	printf("\n\t\t     ***** Current Selection: Viewing Existing customer data *****");
	printf("\nFollowing is the list of existing customers:\n");
	fp_cus = fopen("customer_database.txt", "r");
	while (fread(&customer, sizeof(customer), 1, fp_cus) == 1)
	{
		printf("\n=================================================================================================================\n");
		printf("\nCustomer ID: ");
		printf("%d", customer.customer_id);
		printf("\nCustomer Name: ");
		fflush(stdin);
		puts(customer.customer_name);
		printf("Customer Gender: ");
		fflush(stdin);
		printf("%c", customer.customer_gender);
		printf("\nCustomer age: ");
		fflush(stdin);
		printf("%d", customer.cusotmer_age);
		printf("\nCustomer area name: ");
		fflush(stdin);
		puts(customer.customer_area);
	}
	printf("\nPress any key to return to the customers_panel menu\n");
	getch();
	fclose(fp_cus);
	customers_panel();
}

void Customer_Data_breakdown_age()
{
	int choice;
	company_heading();
	Admin_panel_heading();
	printf("\t\tChoose an option from the list.\n\n\t\t01)Customers whose age is less than 18\n\n\t\t02)Customers whose age is between 18 and 25.\n\n\t\t03)Customers whose age is between 25 and 35.\n\n\t\t04)Customers whose age is between 35 and 45\n\n\t\t05)Customers whose age is greater than 45\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		printf("\n\t\t     ***** Current Selection:  Customers with age less than 18 *****");
		printf("\nFollowing  is the list of customers whose age is less than 18\n");
		fp_cus = fopen("customer_database.txt", "r");
		while (fread(&customer, sizeof(customer), 1, fp_cus) == 1)
		{
			if (customer.cusotmer_age < 18)
			{
				printf("\n=================================================================================================================\n");
				printf("\nCustomer ID: ");
				printf("%d", customer.customer_id);
				printf("\nCustomer Name: ");
				fflush(stdin);
				puts(customer.customer_name);
				printf("Customer Gender: ");
				fflush(stdin);
				printf("%c", customer.customer_gender);
				printf("\nCustomer age: ");
				fflush(stdin);
				printf("%d", customer.cusotmer_age);
				printf("\nCustomer area name: ");
				fflush(stdin);
				puts(customer.customer_area);
			}
		}
		fclose(fp_cus);
		printf("\nPress any key to continue...\n");
		getch();
		customers_panel();
	}

	case 2:
	{
		printf("\n\t\t     ***** Current Selection:  Customers with ages between 18 and 25 *****");
		printf("\nFollowing  is the list of customers with ages between 18 and 25\n");
		fp_cus = fopen("customer_database.txt", "r");
		while (fread(&customer, sizeof(customer), 1, fp_cus) == 1)
		{
			if (customer.cusotmer_age >= 18 && customer.cusotmer_age <= 25)
			{
				printf("\n=================================================================================================================\n");
				printf("\nCustomer ID: ");
				printf("%d", customer.customer_id);
				printf("\nCustomer Name: ");
				fflush(stdin);
				puts(customer.customer_name);
				printf("Customer Gender: ");
				fflush(stdin);
				printf("%c", customer.customer_gender);
				printf("\nCustomer age: ");
				fflush(stdin);
				printf("%d", customer.cusotmer_age);
				printf("\nCustomer area name: ");
				fflush(stdin);
				puts(customer.customer_area);
			}
		}
		fclose(fp_cus);
		printf("\nPress any key to continue...\n");
		getch();
		customers_panel();
	}

	case 3:
	{
		printf("\n\t\t     ***** Current Selection:  Customers with ages between 25 and 35 *****");
		printf("\nFollowing  is the list of customers with ages between 25 and 35\n");
		fp_cus = fopen("customer_database.txt", "r");
		while (fread(&customer, sizeof(customer), 1, fp_cus) == 1)
		{
			if (customer.cusotmer_age >= 25 && customer.cusotmer_age <= 35)
			{
				printf("\n=================================================================================================================\n");
				printf("\nCustomer ID: ");
				printf("%d", customer.customer_id);
				printf("\nCustomer Name: ");
				fflush(stdin);
				puts(customer.customer_name);
				printf("Customer Gender: ");
				fflush(stdin);
				printf("%c", customer.customer_gender);
				printf("\nCustomer age: ");
				fflush(stdin);
				printf("%d", customer.cusotmer_age);
				printf("\nCustomer area name: ");
				fflush(stdin);
				puts(customer.customer_area);
			}
		}
		fclose(fp_cus);
		printf("\nPress any key to continue...\n");
		getch();
		customers_panel();
	}

	case 4:
	{
		printf("\n\t\t     ***** Current Selection:  Customers with ages between 35 and 45 *****");
		printf("\nFollowing  is the list of customers with ages between 35 and 45\n");
		fp_cus = fopen("customer_database.txt", "r");
		while (fread(&customer, sizeof(customer), 1, fp_cus) == 1)
		{
			if (customer.cusotmer_age >= 35 && customer.cusotmer_age <= 45)
			{
				printf("\n=================================================================================================================\n");
				printf("\nCustomer ID: ");
				printf("%d", customer.customer_id);
				printf("\nCustomer Name: ");
				fflush(stdin);
				puts(customer.customer_name);
				printf("Customer Gender: ");
				fflush(stdin);
				printf("%c", customer.customer_gender);
				printf("\nCustomer age: ");
				fflush(stdin);
				printf("%d", customer.cusotmer_age);
				printf("\nCustomer area name: ");
				fflush(stdin);
				puts(customer.customer_area);
			}
		}
		fclose(fp_cus);
		printf("\nPress any key to continue...\n");
		getch();
		customers_panel();
	}

	case 5:
	{
		printf("\n\t\t     ***** Current Selection:  Customers with ages greater than 45*****");
		printf("\nFollowing  is the list of customers with ages greater than 45\n");
		fp_cus = fopen("customer_database.txt", "r");
		while (fread(&customer, sizeof(customer), 1, fp_cus) == 1)
		{
			if (customer.cusotmer_age > 45)
			{
				printf("\n=================================================================================================================\n");
				printf("\nCustomer ID: ");
				printf("%d", customer.customer_id);
				printf("\nCustomer Name: ");
				fflush(stdin);
				puts(customer.customer_name);
				printf("Customer Gender: ");
				fflush(stdin);
				printf("%c", customer.customer_gender);
				printf("\nCustomer age: ");
				fflush(stdin);
				printf("%d", customer.cusotmer_age);
				printf("\nCustomer area name: ");
				fflush(stdin);
				puts(customer.customer_area);
			}
		}
		fclose(fp_cus);
		printf("\nPress any key to continue...\n");
		getch();
		customers_panel();
	}
	}
}

void Customer_data_breakdown_gender()
{
	char gender_choice;
	printf("Do you want to see Male customers or Female customers?(Enter M for male or F for female)\n");fflush(stdin);
	scanf("%c",&gender_choice);
	printf("\n\t\t     ***** Current Selection:  All %c Customers *****",gender_choice);
		fp_cus = fopen("customer_database.txt", "r");
		while (fread(&customer, sizeof(customer), 1, fp_cus) == 1)
		{
			if (customer.customer_gender==gender_choice)
			{
				printf("\n=================================================================================================================\n");
				printf("\nCustomer ID: ");
				printf("%d", customer.customer_id);
				printf("\nCustomer Name: ");
				fflush(stdin);
				puts(customer.customer_name);
				printf("Customer Gender: ");
				fflush(stdin);
				printf("%c", customer.customer_gender);
				printf("\nCustomer age: ");
				fflush(stdin);
				printf("%d", customer.cusotmer_age);
				printf("\nCustomer area name: ");
				fflush(stdin);
				puts(customer.customer_area);
			}
		}
		fclose(fp_cus);
		printf("\nPress any key to continue...\n");
		getch();
		customers_panel();
}

void company_heading()
{
	system("cls");
	printf("\n=================================================================================================================\n");
	printf("\n\t\t\t\t\t   Stationary Shop Managment Software\n");
	printf("\t\t\t\t Provider of best sationary items at most reasonable prices\n");
	printf("\n=================================================================================================================\n");
}

void Admin_panel_heading()
{
	printf("\t");
	printf("\n=================================================================================================================\n");
	printf("\n\t\t\t\t\t\tADMIN PANEL\n");
	printf("\t");
	printf("\n=================================================================================================================\n");
}

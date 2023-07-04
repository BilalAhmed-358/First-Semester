int func(float arr[],int *sumptr,int *avgptr,int *standDevptr)
// {
    
//     int i, numerator;
//     for (i = 0; i < 5; i++)
//     {
//         *sumptr = *sumptr + arr[i];
//     }
//     *avgptr = *sumptr / 5;
//     for (i = 0; i < 5; i++)
//     {
//         numerator += ((arr[i] - *avgptr) * (arr[i] - *avgptr));
//     }
//     *standDevptr = sqrt(numerator / 5);
    
//     // printf("The sum of the elements of the array is %.2f\n", sum);
//     // printf("The average of the elements of the array is %.2f\n", avg);
//     // printf("And the standard deviation is %.2f\n", standDev);

// }
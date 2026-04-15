// //WAP to enter the details of the teachers and display the teacher with highest and lowest salary and count teachers per department.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n,i;
//     printf("Enter the number of teachers:");
//     scanf("%d",&n);
//     char name[n][20],dept[n][20];
//     float salary[n];
// for(i=0;i<n;i++)
// {
//     printf("Enter the name of teacher %d:",i+1);
//     scanf("%s",name[i]);
//     printf("Enter the department of teacher %d:",i+1);
//     scanf("%s",dept[i]);
//     printf("Enter the salary of teacher %d:",i+1);
//     scanf("%f",&salary[i]);
// }
//    int max_index=0,min_index=0;
//    for(i=1;i<n;i++)
//    {
//     if(salary[i]>salary[max_index])
//     {
//         max_index=i;
//     }
//     if(salary[i]<salary[min_index])
//     {
//         min_index=i;
//     }
//    }
//    printf("Teacher with highest salary:\n");
//    printf("Name: %s\n",name[max_index]);
//    printf("Department: %s\n",dept[max_index]);
//    printf("Salary: %.2f\n",salary[max_index]);
//    printf("Teacher with lowest salary:\n");
//    printf("Name: %s\n",name[min_index]);
//    printf("Department: %s\n",dept[min_index]);
//    printf("Salary: %.2f\n",salary[min_index]);
// //     int count[10]={0},j;
// //     for(i=0;i<n;i++)
// //     {
// //         for(j=0;j<i;j++)
// //         {
// //             if(strcmp(dept[i],dept[j])==0)
// //             {
// //                 count[j]++;
// //                 break;
// //             }
// //         }
// //         if(j==i)
// //         {
// //             count[i]++;
// //         }
// //     }
// //     printf("Department-wise teacher count:\n");
// //     for(i=0;i<n;i++)
// //     {
// //         if(count[i]>0)
// //         {
// //             printf("Department: %s, teachers: %d\n",dept[i],count[i]);
// //         }           
// //     }
// //     return 0;
// // }

#include<stdio.h>
void teacherexp(){
    
    struct Teacher t;
    FILE *fp=fopen("teachers.dat","rb");

    int found=0;

    if(fp==NULL){
        printf("The file doesnot exist.");
        return;
    }
    
    while(fread(&t, sizeof(struct Teacher), 1, fp)){
        if(t.experience>10){
                printf("Name:%s\nDepartment:%s\nExperience:%d years\n",t.name,t.dept,t.experience);
                printf("\n");
            found = 1;
        }
    }
    if(!found){
        printf("There are no teachers with experience over 10 years\n");
    }
    fclose(fp);
}
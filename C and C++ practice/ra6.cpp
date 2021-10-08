#include <stdio.h>

struct Students {
   char  name[50];
   int id;
   float gpa_c;
   float gpa_algo;
   float gpa_eng;
   float gpa_math;
};

int main( )
{
    int n,i;

    printf("Number of Students: ");
    scanf("%d", &n);

    struct Students student[n];

    for(i=0;i<n;i++){
        printf("Student %d\n", i+1);

        printf("Student Name: ");
        scanf("%s", student[i].name);

        printf("Student ID: ");
        scanf("%d", &student[i].id);

        printf("GPA of C: ");
        scanf("%f", &student[i].gpa_c);

        printf("GPA of ALgo: ");
        scanf("%f", &student[i].gpa_algo);

        printf("GPA of English: ");
        scanf("%f", &student[i].gpa_eng);

        printf("GPA of Math: ");
        scanf("%f", &student[i].gpa_math);
    }

    for(i=0;i<n;i++){
        printf("Student %d:\n", i+1);

        float cgpa = (student[i].gpa_c+student[i].gpa_algo+student[i].gpa_eng+student[i].gpa_math)/4;
        printf("CGPA: %0.3f\n", cgpa);

        if(cgpa==4){
            printf("GRADE: A+\n");
        }
        else if(cgpa==3.75){
            printf("GRADE: A\n");
        }
        else if(cgpa==3.50){
            printf("GRADE: A-\n");
        }
        else if(cgpa==3.25){
            printf("GRADE: B+\n");
        }
        else if(cgpa==3.00){
            printf("GRADE: B\n");
        }
        else if(cgpa==2.75){
            printf("GRADE: B-\n");
        }
        else if(cgpa==3.75){
            printf("GRADE: C+\n");
        }
        else if(3.75<cgpa && cgpa<4.00){
            (3.75<cgpa && cgpa<3.875)? printf("GRADE: A (Equivalence to 3.75(using Flooring))\n"):printf("GRADE: A+ (Equivalence to 4.00(using Ceiling))\n");
        }
        else if(3.50<cgpa && cgpa<3.75){
            (3.50<cgpa && cgpa<3.625)? printf("GRADE: A- (Equivalence to 3.50(using Flooring))\n"):printf("GRADE: A (Equivalence to 3.75(using Ceiling))\n");
        }
        else if(3.25<cgpa && cgpa<3.50){
            (3.25<cgpa && cgpa<3.375)? printf("GRADE: B+ (Equivalence to 3.25(using Flooring))\n"):printf("GRADE: A- (Equivalence to 3.50(using Ceiling))\n");
        }
        else if(3.00<cgpa && cgpa<3.25){
            (3.00<cgpa && cgpa<3.125)? printf("GRADE: B (Equivalence to 3.00(using Flooring))\n"):printf("GRADE: B+ (Equivalence to 3.25(using Ceiling))\n");
        }
        else if(2.75<cgpa && cgpa<3.00){
            (2.75<cgpa && cgpa<2.875)? printf("GRADE: B- (Equivalence to 2.75(using Flooring))\n"):printf("GRADE: B (Equivalence to 3.00(using Ceiling))\n");
        }
        else if(2.50<cgpa && cgpa<2.75){
            (2.50<cgpa && cgpa<2.625)? printf("GRADE: C+ (Equivalence to 2.50(using Flooring))\n"):printf("GRADE: B- (Equivalence to 2.75(using Ceiling))\n");
        }

    }

   return 0;
}

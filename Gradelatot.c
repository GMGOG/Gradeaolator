#include<stdio.h>

int main()
{
    //Declaring variables
    double assign1;
    double assign2;
    double assign3;
    double weeklyLabs;
    double dailyPrac;
    double Labex1;
    double Labex2;
    double desiredGrade;
    int moss1;
    int moss2;
    int moss3;
    int bonusMarks;
    double currentCoursmk;
    double gradeneeded;
    double gradewanted;
     //Entered exam data
    printf("Enter the following marks (each of 100):\n");
    printf("Weekly Labs:");
    scanf("%lf", &weeklyLabs);
    printf("Daily practice:");
    scanf("%lf", &dailyPrac);
    printf("Lab Exam I:");
    scanf("%lf",&Labex1);
    printf("Lab Exam II:");
    scanf("%lf",&Labex2);
    printf("Assignment1:");
    scanf("%lf",&assign1);
    printf("MOSS output for A1 (0 / 1):");
    scanf("%d",&moss1);
    printf("Assignment2:");
    scanf("%lf",&assign2);
    printf("MOSS output for A2 (0 / 1):");
    scanf("%d",&moss2);
    printf("Assignment3:");
    scanf("%lf", &assign3);
    printf("MOSS output for A3 (0 / 1):");
    scanf("%d",&moss3);
    
    printf("\n\nHow much do you desire as an overall course grade:");
    scanf("%lf",&desiredGrade);
    // If a student get 100 in both exam he is awarded 3 bonus marks
    if (Labex1 >= 100.00 && Labex2 >= 100.00){
        bonusMarks = 3;
    }
    else{
        bonusMarks = 0;
    } 
      // checking moss output if found cheating then moss result will be 0
    if(moss1 == 0 && moss2 ==0 && moss3 == 0){
        printf("**************************************************\n");
        printf("You cannot pass the course - try harder next time. \n");
        printf("**************************************************\n");
    }
    else{
        printf("****************************************************************\n");
        printf("Assignment      Weight        Marks\n");
        printf("----------------------------------------------------------------\n");
        printf("Weekly Labs      10        %0.2lf\n", weeklyLabs);
        printf("Daily practice   10        %0.2lf\n", dailyPrac);
        printf("assignment 1      5        %0.2lf\n", assign1);
        printf("assignment 2     10        %0.2lf\n", assign2);
        printf("Bonus marks                %d\n", bonusMarks);
        printf("assignment 3     10        %0.2lf\n", assign3);
        printf("lab exam 1       10        %0.2lf\n", Labex1);
        printf("lab exam 2       10        %0.2lf\n", Labex2);
        printf("final exam       35        To be Determined\n");
    }

  // calculations for course marks

    currentCoursmk = ((0.10*weeklyLabs)+(0.10*dailyPrac)+(0.05*assign1)+(0.10*assign2)+bonusMarks+(0.10*assign3)+(0.10*Labex1)+(0.10*Labex2));
    printf(" Current course mark:  %0.2lf / 65.00\n", currentCoursmk);

    gradeneeded = desiredGrade - currentCoursmk;
    
    gradewanted = (gradeneeded/35) * 100;

    printf("you need %0.2lf/35 to reach your \n", gradeneeded);
    
    printf(" in percentage you need %0.2lf %%  to reach your goal\n", gradewanted);
   
    
return 0;
}

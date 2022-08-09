#include <stdio.h>
int main(){
    //all score in 3 subject of all student
    int all_score[2][4][3] = {
        {{0,0,0},{0,0,0},{0,0,0},{0,0,0}},   //Group 1
        {{0,0,0},{0,0,0},{0,0,0},{0,0,0}}},   //Group 2
    score_each_student[2][4] = 
    {{0,0,0,0},         //to store total score of each student of group 1 after caculate
     {0,0,0,0}},       //to store total score of each student of group 2 after caculate
    score_each_group[2] = {0,0},    //to store total score of each group 1 and 2 after caculate 
    total_all_score = 0;      //to store total all score of student

    // System
    for (int i = 0; i < 2 ; i++)
    {
        //get score from user
        printf("%s", i == 0 ? "Enter score in to Group 1 :\n" : "Enter score in to Group 2 :\n");
        for (int j = 0; j < 4; j++)
        { 
            printf("Student %d\n",j + 1);
            for (int k = 0; k < 3; k++)
            {
                if (k < 3)
                {
                    printf("\t- Subject %d = ",k + 1);
                };
                scanf("%d",&all_score[i][j][k]);
                //Caculate score each of student
                score_each_student[i][j] = score_each_student[i][j] + all_score[i][j][k];
            }
            //Caculate score each of group
            score_each_group[i] = score_each_group[i] +  score_each_student[i][j];
        }
        //Caculate all score each of group
        total_all_score = total_all_score + score_each_group[i];
    }

    // display result for verify
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Score of Student %d = %d\n",j+1,score_each_student[i][j]);
        }
        printf("Total Score of Group %d = %d\n\n",i+1,score_each_group[i]);
    }
    printf("Total Score of all student = %d\n",total_all_score);
    return 0;
}
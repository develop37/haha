/*百分制成绩转化为五分制成绩 A B C D E 五种成绩 */
# include<stdio.h>
int main(void)
{
    int score;
    printf("Enter score:\n");
    scanf("%d",&score);
    if(score>=0 && score <=100)
      if (score<60){
        printf("E\n");
      }else if(score<70){
        printf("D\n");
      }else if(score<80){
        printf("C\n");
      }else if(score<90){
        printf("B\n");
      }else {
        printf("A\n");
    }else{
        printf("Invalid score\n");
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ch;

    fp = fopen("feedback.txt", "w");
    if (fp == NULL)
    {
        printf("File open failed\n");
        return 1;
    }

    fprintf(fp, "ABOUT C PROGRAMMING:\n");
    fprintf(fp, "1. I can understand the basic concepts of C programming.\n");
    fprintf(fp, "2. I learned how to write and execute C programs.\n");
    fprintf(fp, "3. I can understand variables, data types and operators.\n");
    fprintf(fp, "4. I learned how to use conditional statements and loops.\n");
    fprintf(fp, "5. Practicing C programs improves my logical thinking.\n");

    fclose(fp);

    fp = fopen("feedback.txt", "a");
    if (fp == NULL)
    {
        printf("File open failed\n");
        return 1;
    }

    fprintf(fp, "\nFEEDBACK ABOUT C LECTURER:\n");
    fprintf(fp, "1. I like this class; it is very useful to me.\n");
    fprintf(fp, "2. I do not like that Tier 1, Tier 2, and Tier 3 are separated.\n");
    fprintf(fp, "3. Apart from that, I like every class because they are easy to understand.\n");
    fprintf(fp, "4. Thank you.\n");

    fclose(fp);

    fp = fopen("feedback.txt", "r");
    if (fp == NULL)
    {
        printf("File open failed\n");
        return 1;
    }

    printf("\nFEEDBACK REPORT\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}

#include <stdio.h>
#include <time.h>

int main()
{
   time_t start, end;
   double time_taken;
   int total_chars = 0;
   const int chars_per_word = 5;

   printf("Type the passage:\n");

   time(&start);

   char ch;
   while ((ch = getchar()) != '\n') {
       if (ch != ' ' && ch != '\t') {
           total_chars++;
       }
   }

   time(&end);

   time_taken = difftime(end, start);

   double minutes = time_taken / 60.0;

   double words = (double)total_chars / chars_per_word;
   double wpm = words / minutes;


   printf("\nTotal characters typed: %d\n", total_chars);
   printf("Time taken: %.2f seconds\n", time_taken);
   printf("Typing speed: %.2f words per minute (WPM)\n", wpm);
return 0;
}

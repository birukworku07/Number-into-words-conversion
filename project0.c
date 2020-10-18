#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main(int argc, char** argv)
{

  if (argc == 1) {
   char num[11];


   fgets(num, 11, stdin);


    char* singleDigit[] = {"", "one","two","three","four","five","six","seven","eight","nine"};
    char* twoDigit[] = {"","ten", "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char* multiples[] = {"","", "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char* powers[] = {"hundred", "thousand", "million"};

    int counter = strlen(num) - 1;
    int length = counter;

    for(int i = 0; (i < counter && length > 0); ++i) {
        if (length == 3 || length == 4) {
            if (num[i] != '0') {
                printf("%s ", singleDigit[num[i] - '0']);
                printf("%s ", powers[length - 3]);
            }
            --length;
        }

        else if (length == 5) {
           if (num[i] != '0') {
              if(num[i] == '1') {
                int j = i + 1;
                int sum = num[i] - '0' + num[j] - '0';
                printf("%s ", twoDigit[sum]);
                printf("%s ", powers[1]);
                --length;
              } else {
                int j = i + 1;
                printf("%s %s ", multiples[num[i] - '0'], singleDigit[num[j]-'0']);
                printf("%s ", powers[1]);
                --length;

              }
              ++i;
            }
                --length;

        }
        else if(length == 6) {
            if (num[i] != '0') {
                printf("%s ", singleDigit[num[i] - '0']);
                printf ("%s ", powers[0]);
                if (*(num+i+1) == '0' && *(num+i+2) == '0') {
                    printf("%s ", powers[1]);

                }
            }
            -- length;
        }
	else if(length == 9 ) {
             if (num[i] != '0') {
                printf("%s ", singleDigit[num[i] - '0']);
                printf ("%s ", powers[0]);
                if (*(num+i+1) == '0' && *(num+i+2) == '0') {
                    printf("%s ", powers[2]);

                }
            }
            -- length;

        }
	else if (length == 7) {
            if (num[i] != '0') {
                printf("%s ", singleDigit[num[i] - '0']);
                printf("%s ", powers[2]);
            }
            --length;

        } else if (length == 8) {
		if (num[i] != '0') {
              if (num[i] == '1') {
                int j = i + 1;
                int sum = num[i] - '0' + num[j] - '0';
                printf("%s ", twoDigit[sum]);
                printf("%s ", powers[2]);
                --length;
              }else {
                int j = i + 1;
                printf("%s %s ", multiples[num[i] - '0'], singleDigit[num[j] - '0']);
                printf("%s ", powers[2]);
                --length;
              }
                ++i;
            }
                --length;


        } else if (length == 2) {
            if (num[i] != '0') {
                if (num[i] == '1') {
                int j = i + 1;
                int sum = num[i] - '0' + num[j] - '0';
                printf("%s ", twoDigit[sum]);
		--length;
                } else {
                    printf("%s ", multiples[num[i] - '0']);
                }

            }
                length--;


        } else {
            if (num[i] != '0') {
                printf("%s ", singleDigit[num[i]- '0']);
            }
            --length;
        }



    }
    printf("%c", '\n');

  }
   else if (argc==2 && strcmp(argv[1], "u") == 0) {
   char num[11];


   fgets(num, 11, stdin);


    char* singleDigit[] = {"", "ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    char* twoDigit[] = {"","TEN", "ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETEEN"};
    char* multiples[] = {"","", "TWENTY","THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};
    char* powers[] = {"HUNDRED", "THOUSAND", "MILLION"};

    int counter = strlen(num) - 1;
    int length = counter;

    for(int i = 0; (i < counter && length > 0); ++i) {
        if (length == 3 || length == 4) {
            if (num[i] != '0') {
                printf("%s ", singleDigit[num[i] - '0']);
                printf("%s ", powers[length - 3]);
            }
            --length;
        }

        else if (length == 5) {
            if (num[i] != '0') {
              if(num[i] == '1') {
                int j = i + 1;
                int sum = num[i] - '0' + num[j] - '0';
                printf("%s ", twoDigit[sum]);
                printf("%s ", powers[1]);
                --length;
              } else {
                int j = i + 1;
                printf("%s %s ", multiples[num[i] - '0'], singleDigit[num[j]-'0']);
                printf("%s ", powers[1]);
                --length;

              }
              ++i;
            }
                --length ;
        }
	else if(length == 6) {
            if (num[i] != '0') {
                printf("%s ", singleDigit[num[i] - '0']);
                printf ("%s ", powers[0]);
                if (*(num+i+1) == '0' && *(num+i+2) == '0') {
                    printf("%s ", powers[1]);

                }
            }
            -- length;
        }
	else if(length == 9 ) {
             if (num[i] != '0') {
                printf("%s ", singleDigit[num[i] - '0']);
                printf ("%s ", powers[0]);
                if (*(num+i+1) == '0' && *(num+i+2) == '0') {
                    printf("%s ", powers[2]);

                }
            }
            -- length;

        }
        else if (length == 7) {
            if (num[i] != '0') {
                printf("%s ", singleDigit[num[i] - '0']);
                printf("%s ", powers[2]);
            }
            --length;

        } else if (length == 8) {
	    if (num[i] != '0') {
              if (num[i] == '1') {
                int j = i + 1;
                int sum = num[i] - '0' + num[j] - '0';
                printf("%s ", twoDigit[sum]);
                printf("%s ", powers[2]);
                --length;
              }else {
                int j = i + 1;
                printf("%s %s ", multiples[num[i] - '0'], singleDigit[num[j] - '0']);
                printf("%s ", powers[2]);
                --length;
              }
                ++i;
            }
                --length;
        }
	else if (length == 2) {
            if (num[i] != '0') {
                if (num[i] == '1') {
                int j = i + 1;
                int sum = num[i] - '0' + num[j] - '0';
                printf("%s ", twoDigit[sum]);
		--length;
                } else {
                    printf("%s ", multiples[num[i] - '0']);
                }

            }
                length--;


        } else {
            if (num[i] != '0') {
                printf("%s ", singleDigit[num[i]- '0']);
            }
            --length;
        }



    }
    printf("%c", '\n');

    } else {
	fprintf(stderr, "ERROR\n");
    }


 }

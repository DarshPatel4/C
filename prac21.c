            // this program is performed by Darsh_22TCS001//
#include<stdio.h>
int main()
{
    int TotalPopulation=80000,NumOfLiterateMW,
        NumOfMen,NumOfLiterateMen,NumberOfIlliterateMen,
        NumberOfWomen,NumOfLiterateWomen,NumOfIlliterateWomen;
printf("Sr.No\t\tGet Outcome\t\t\t\t\t\tValue\n");
        //total population calculation//
printf("  1  \t\tTotal Population\t\t\t\t\t80000\n");
    NumOfLiterateMW=TotalPopulation*48/100;
printf("  2  \t\tNumber of Literate(Men + Women)\t\t\t\t%d \n",NumOfLiterateMW);
        //number of men//
    NumOfMen=TotalPopulation*52/100;
printf("  3  \t\tNumber of Men\t\t\t\t\t\t%d\n",NumOfMen);
        //number of literate men//
    NumOfLiterateMen=TotalPopulation*35/100;
printf("  4  \t\tNumber of Literate Men\t\t\t\t\t%d\n",NumOfLiterateMen);
        //number of illiterate men//
    NumberOfIlliterateMen=NumOfMen-NumOfLiterateMen;
printf("  5  \t\tNumber of illiterate Men\t\t\t\t%d\n",NumberOfIlliterateMen);
        //number of women//
    NumberOfWomen=TotalPopulation-NumOfMen;
printf("  6  \t\tNumber of Women\t\t\t\t\t\t%d\n",NumberOfWomen);
        //number of literate women//
    NumOfLiterateWomen=NumOfLiterateMW-NumOfLiterateMen;
printf("  7  \t\tNumber of Literate Women\t\t\t\t%d\n",NumOfLiterateWomen);
        //number of illiterate women//
    NumOfIlliterateWomen=NumberOfWomen-NumOfLiterateWomen;
printf("  8  \t\tNumber of illiterate Women\t\t\t\t%d\n",NumOfIlliterateWomen);
printf("\nThis program is performed by DARSH_22CS051");
}

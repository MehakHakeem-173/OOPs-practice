#include<iostream>
#include<cstring>
using namespace std;

int main(){
    //declearing strings
    char s1[] = "Welcome to ";
    char s2[] = "virtual Univercity ";
    char s3[] = "Welcome to pershawar ";
    char city[] = "peshawar";
    char province[] = "KPK";

    //character array to store manipulated string
    char s[80];

    //diplay original string
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;

    //finding length of the string

    cout << "\n length of s1 = " << strlen(s1) << endl;
    cout << " length of s1 = " << strlen(s1) << endl;
    cout << " length of s1 = " << strlen(s1) << endl;

    //copying string
    strcpy(s, "hyderabad");
    cout << "\n Nearest city to " << city << "is " << s << endl;

    //concatenating strings
    strcat(s, "and ");
    strcat(s, city);
    strcat(s, "are in ");
    strcat(s, province);
    strcat(s,"." );

    cout << s << endl;

    //comparing complete strings

    if(strcmp(s1, s2) == 0)
    cout << "\ns1 and s2 are identical" << endl;
    else
    cout << "\n s1 and s2 are not identical" << endl;

    //comparing first 7 characters
    if(strncmp(s1, s3, 7) == 0)
    cout << "first 7 characters of s1 and s2 are identical" << endl;

    else
    cout << "\n first 7 characters of s1 and s2 are not identical" << endl;

    return 0;

}

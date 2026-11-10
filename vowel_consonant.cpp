#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter the alphabet:"<<endl;
    cin>>a;
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
      cout<<"It is a vowel";
    else
      cout<<"Its a consonant";
    return 0;
}

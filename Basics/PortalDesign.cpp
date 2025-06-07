#include<iostream>
#include<iomanip>
using namespace std;

float mmw, uts, pcm, cal, chem, chemLab, cfp, ced, pe, nstp, mmw2, uts2, pcm2, cal2, chem2, chemLab2, cfp2, ced2, pe2, nstp2;

    void MMW(){
        while(mmw != 1.00 && mmw != 1.25 && mmw != 1.50 && mmw != 1.75 && mmw != 2.00 && mmw != 2.25 && mmw != 2.50 && mmw != 2.75 &&  mmw != 3.00 && mmw != 5.00){
            cout<< "     Mathematics in the Modern World     |      3      |      ";
            cin>> mmw;
        }
    }

    void UTS(){
        while(uts != 1.00 && uts != 1.25 && uts != 1.50 && uts != 1.75 && uts != 2.00 && uts != 2.25 && uts != 2.50 && uts != 2.75 &&  uts != 3.00 && uts != 5.00){
            cout<< "         Understanding the Self          |      3      |      ";
            cin>> uts;
            }
    }

    void PCM(){
        while(pcm != 1.00 && pcm != 1.25 && pcm != 1.50 && pcm != 1.75 && pcm != 2.00 && pcm != 2.25 && pcm != 2.50 && pcm != 2.75 &&  pcm != 3.00 && pcm != 5.00){
            cout<< "         Purposive Communication         |      3      |      ";
            cin>> pcm;
        }
    }

    void CAL(){
        while(cal != 1.00 && cal != 1.25 && cal != 1.50 && cal != 1.75 && cal != 2.00 && cal != 2.25 && cal != 2.50 && cal != 2.75 &&  cal != 3.00 && cal != 5.00){
            cout<< "               Calculus 1                |      3      |      ";
            cin>> cal;
        }
    }

    void CHEM(){
        while(chem != 1.00 && chem != 1.25 && chem != 1.50 && chem != 1.75 && chem != 2.00 && chem != 2.25 && chem != 2.50 && chem != 2.75 &&  chem != 3.00 && chem != 5.00){
            cout<< "    Chemistry for Engineers - Lecture    |      3      |      ";
            cin>> chem;
        }
    }

    void CHEM_LAB(){
        while(chemLab != 1.00 && chemLab != 1.25 && chemLab != 1.50 && chemLab != 1.75 && chemLab != 2.00 && chemLab != 2.25 && chemLab != 2.50 && chemLab != 2.75 &&  chemLab != 3.00 && chemLab != 5.00){
            cout<< "  Chemistry for Engineers - Laboratory   |      1      |      ";
            cin>> chemLab;
        }
    }

    void CFP(){
        while(cfp != 1.00 && cfp != 1.25 && cfp != 1.50 && cfp != 1.75 && cfp != 2.00 && cfp != 2.25 && cfp != 2.50 && cfp != 2.75 &&  cfp != 3.00 && cfp != 5.00){
            cout<< "  Computer Fundamentals and Programming  |      2      |      ";
            cin>> cfp;
        }
    }

    void CED(){
        while(ced != 1.00 && ced != 1.25 && ced != 1.50 && ced != 1.75 && ced != 2.00 && ced != 2.25 && ced != 2.50 && ced != 2.75 &&  ced != 3.00 && ced != 5.00){
            cout<< "  Computer Engineering as a Discipline   |      1      |      ";
            cin>> ced;
        }
    }

    void PE(){
        while(pe != 1.00 && pe != 1.25 && pe != 1.50 && pe != 1.75 && pe != 2.00 && pe != 2.25 && pe != 2.50 && pe != 2.75 &&  pe != 3.00 && pe != 5.00){
            cout<< "          Physical Education 1           |      2      |      ";
            cin>> pe;
        }
    }

    void NSTP(){
        while(nstp != 1.00 && nstp != 1.25 && nstp != 1.50 && nstp != 1.75 && nstp != 2.00 && nstp != 2.25 && nstp != 2.50 && nstp != 2.75 &&  nstp != 3.00 && nstp != 5.00){
            cout<< "   National Service Training Program 1   |      3      |      ";
            cin>> nstp;
        }
    }

    void CALC(){
        mmw2 = mmw * 3;
        uts2 = uts * 3;
        pcm2 = pcm * 3;
        cal2= cal * 3;
        chem2 = chem * 3;
        chemLab2 = chemLab * 1;
        cfp2 = cfp * 2;
        ced2 = ced * 1;
        pe2 = pe * 2;
        nstp2 = nstp * 3;
        }

    int main(){

        float gwa;
        cout<<"Enter grades on the following subjects:";
        cout<<endl;
        cout<<endl<<"                 Subjects                |     Unit    |    Grades";
        cout<<endl<<"-----------------------------------------|-------------|--------------"<<endl;
        MMW();
        UTS();
        PCM();
        CAL();
        CHEM();
        CHEM_LAB();
        CFP();
        CED();
        PE();
        NSTP();
        CALC();
         cout<<"-----------------------------------------|-------------|--------------" <<endl;

        gwa = (mmw2 + uts2 + pcm2 + cal2 + chem2 + chemLab2 + cfp2 + ced2 + pe2)/21;
        std::cout << std::fixed << std::setprecision(3);
         std::cout<< "                           Total Unit(s):|     21      | GWA: "<< gwa << std::endl;

        if(mmw >= 2.75 || uts >= 2.75 || pcm >= 2.75 || cal >= 2.75 || chemLab >= 2.75 || chem >= 2.75 || cfp >= 2.75 || ced >= 2.75 || pe >= 2.75 || nstp >= 2.75 ){
            cout<<endl<<"You are not eligible for the Latin Honors.";
        }
        else{
            if (gwa>=1.00&&gwa<=1.20){
                if (mmw>2.00||uts>2.00||pcm>2.00||cal>2.00||chemLab>2.00||chem>2.00||cfp>2.00||ced>2.00||pe>2.00||nstp>2.00 || mmw>2.25||uts>2.25||pcm>2.25||cal>2.25||chemLab>2.25||chem>2.25||cfp>2.25||ced>2.25||pe>2.25||nstp>2.25) {
                    cout<<endl<<"You are not qualified for summa cum laude and magna cum laude but you are qualified for CUM LAUDE";
                }
                else {
                    if (mmw>2.00||uts>2.00||pcm>2.00||cal>2.00||chemLab>2.00||chem>2.00||cfp>2.00||ced>2.00||pe>2.00||nstp>2.00) {
                    cout<<endl<<"You are not qualified for summa cum laude but you are qualified for MAGNA CUM LAUDE";
                    }
                    else {
                    cout<<endl<<"You are qualified for SUMMA CUM LAUDE!";
                    }
                }
             }

            else if (gwa>1.20&&gwa<=1.45) {
                if (mmw>2.25||uts>2.25||pcm>2.25||cal>2.25||chemLab>2.25||chem>2.25||cfp>2.25||ced>2.25||pe>2.25||nstp>2.25 || mmw>2.5||uts>2.5||pcm>2.5||cal>2.5||chemLab>2.5||chem>2.5||cfp>2.5||ced>2.5||pe>2.5||nstp>2.5) {
                    cout<<endl<<"You are not qualified for magna cum laude but you are qualified for CUM LAUDE";
                }
                else{
                if (mmw>2.25||uts>2.25||pcm>2.25||cal>2.25||chemLab>2.25||chem>2.25||cfp>2.25||ced>2.25||pe>2.25||nstp>2.25) {
                    cout<<endl<<"You are not qualified for magna cum laude but you are qualified for CUM LAUDE";
                }
                else {
                    cout<<endl<<"You are qualified for MAGNA CUM LAUDE!";
                }
            }
            }

            else if(gwa >= 1.46 && gwa <= 1.75){
                 if (mmw>2.5||uts>2.5||pcm>2.5||cal>2.5||chemLab>2.5||chem>2.5||cfp>2.5||ced>2.5||pe>2.5||nstp>2.5) {
                    cout<<endl<<"You are not qualified for cum laude";
                }
                else {
                    cout<<endl<<"You are qualified for CUM LAUDE!";
                }
            }
            else{
                cout<<endl<<"Not qualified for the Latin Honors.";
                cout<<endl;
            }
        }
    return 0;

        }

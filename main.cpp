#include <iostream>
#include <iomanip>


using namespace std;


void showAll(){
    cout << left << setw(39) << "         _ _ _ _ _";
    cout << left << setw(39) << "         _  _ _ _";
    cout << left << setw(39) << "         _ _ _ _ _" << endl;
    cout << left << setw(39) << "_ _ _ _/       _ _ _)__";
    cout << left << setw(39) << "_ _ _ _/     (_ _)";
    cout << left << setw(39) << "_ _ _ _/      (_ _)_ _ _" << endl;
    cout << left << setw(39) << "               _ _ _ _ )_";
    cout << left << setw(39) << "            (_ _ _)";
    cout << left << setw(39) << "                _ _ _ _ _) " << endl;
    cout << left << setw(39) << "                _ _ _ _ _)";
    cout << left << setw(39) << "            (_ _ _ )";
    cout << left << setw(39) << "                _ _ _ _ _ )" << endl;
    cout << left << setw(39) << "_ _ _ _         _ _ _ _)";
    cout << left << setw(39) << "_ _ _ _      ( _ _)";
    cout << left << setw(39) << "_ _ _ _       (_ _ _)" << endl;
    cout << left << setw(39) << "       \\ _ _ _ _ _ _)";
    cout << left << setw(39) << "       \\ _ _(_ _)";
    cout << left << setw(39) << "       \\ _ _( _ _)" << endl;

    cout << left << setw(39) << "1.Paper";
    cout << left << setw(39) << "2.Rock";
    cout << left << setw(39) << "3.Scissor" << endl;
}


void throwPaper(){
    cout << "         _ _ _ _ _" << endl;
    cout << "_ _ _ _/       _ _ _)__" << endl;
    cout << "               _ _ _ _ )_" << endl;
    cout << "                _ _ _ _ _)" << endl;
    cout << "_ _ _ _         _ _ _ _)" << endl;
    cout << "       \\ _ _ _ _ _ _)" << endl;
}

void throwRock(){
    cout << "         _  _ _ _" << endl;
    cout << "_ _ _ _/     (_ _)" << endl;
    cout << "            (_ _ _)" << endl;
    cout << "            (_ _ _ )" << endl;
    cout << "_ _ _ _      ( _ _)" << endl;
    cout << "       \\ _ _(_ _)" << endl;
}

void throwScissor(){
    cout << "         _ _ _ _ _" << endl;
    cout << "_ _ _ _/      (_ _)_ _ _" << endl;
    cout << "                _ _ _ _ _) " << endl;
    cout << "                _ _ _ _ _ )" << endl;
    cout << "_ _ _ _       (_ _ _)" << endl;
    cout << "       \\ _ _( _ _)" << endl;
}


void check(int randNum, int num){

    if(randNum==1&&num==2){
        cout<<"You Lose!"<<endl;
    } else if(randNum==2&&num==1){
        cout<<"You Win!"<<endl;
    } else if(randNum==3&&num==2){
        cout<<"You Win!"<<endl;
    } else if(randNum==2&&num==3){
        cout<<"You Lose!"<<endl;
    } else if(randNum==3&&num==1){
        cout<<"You Lose!"<<endl;
    } else if(randNum==1&&num==3){
        cout<<"You Win!"<<endl;
    } else{
        cout<<"Draw!!!"<<endl;
    }
}
void showImg(int num){

    if(num==1){
        throwPaper();
    } else if(num==2){
        throwRock();
    } else {
        throwScissor();
    }
}

void takeInput(){
    int num;
    cout << "Enter your preferrence (in number):";
    cin >> num;
    cout << "You Chose:" << endl;
showImg(num);
    srand(time(NULL));
    int randNum = (rand() % 3) + 1;
    cout<<"Computer:"<<endl;
    showImg(randNum);

    check( randNum,  num);

}


int main()
{
    /*
                           __
             _  _ _ _     / /
    _ _ _ _/      (_ _)  / /
                _ _ _ _ | |
                (_ _ _ _ \ \
    _ _ _ _       (_ _ _  \_\
           \\ _ _( _ _)

    */

    showAll();
    takeInput();
    main();


    return 0;
}

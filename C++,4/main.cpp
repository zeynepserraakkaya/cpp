#include <iostream>

using namespace std;

int getMax(int num1,int num2){
    int result;
    if(num1>num2){
        result=num1;
    }else{
        result=num2;
    }
    return result;
}

int getMax1(int num1,int num2,int num3){
    int result;
    if(num1>=num2&&num1>=num3){
        result=num1;
    }else if(num2>=num1&&num2>=num3){
        result=num2;
    }else{
        result=num3;
    }
    return result;
}

int main()
{
    // if

    bool isX=true;
    bool isY=true;

    if(isX){
        cout <<"It is X."<< endl;
    } else{
        cout <<"It is not X."<< endl;
    }

    if(isY){
        cout <<"It is Y."<< endl;
    } else{
        cout <<"It is not Y."<< endl;
    }

    if(isX&&isY){ // && is AND operator
        cout <<"It is X and it is Y."<< endl;
    } else{
        cout <<"It is not X or it is not Y or both."<< endl;
    }

    isY=false;

    if(isX&&isY){ // && is AND operator
        cout <<"It is X and it is Y."<< endl;
    } else{
        cout <<"It is not X or it is not Y or both."<< endl;
    }


    if(isX||isY){ // || is OR operator
        cout <<"It is X or it is Y."<< endl;
    } else{
        cout <<"It is not X and it is not Y."<< endl;
    }

    isX=false;

    if(isX||isY){ // || is OR operator
        cout <<"It is X or it is Y."<< endl;
    } else{
        cout <<"It is not X and it is not Y."<< endl;
    }

    if(isX&&isY){ // && is AND operator
        cout <<"It is X and it is Y."<< endl;
    } else if(isX&&!isY){
        cout <<"It is X and it is not Y."<< endl;
    } else if(!isX&&isY){
        cout <<"It is not X and it is Y."<< endl;
    } else{
        cout <<"It is not X and it is not Y."<< endl;
    }

    isX=true;

    if(isX&&isY){ // && is AND operator
        cout <<"It is X and it is Y."<< endl;
    } else if(isX&&!isY){
        cout <<"It is X and it is not Y."<< endl;
    } else if(!isX&&isY){
        cout <<"It is not X and it is Y."<< endl;
    } else{
        cout <<"It is not X and it is not Y."<< endl;
    }

    isX=false;
    isY=true;

    if(isX&&isY){ // && is AND operator
        cout <<"It is X and it is Y."<< endl;
    } else if(isX&&!isY){
        cout <<"It is X and it is not Y."<< endl;
    } else if(!isX&&isY){
        cout <<"It is not X and it is Y."<< endl;
    } else{
        cout <<"It is not X and it is not Y."<< endl;
    }

    isX=true;

    if(isX&&isY){ // && is AND operator
        cout <<"It is X and it is Y."<< endl;
    } else if(isX&&!isY){
        cout <<"It is X and it is not Y."<< endl;
    } else if(!isX&&isY){
        cout <<"It is not X and it is Y."<< endl;
    } else{
        cout <<"It is not X and it is not Y."<< endl;
    }

    cout <<getMax(5,10)<< endl;
    cout <<getMax(25,5)<< endl;

    cout <<getMax1(1,3,5)<< endl;
    cout <<getMax1(19,17,15)<< endl;

    return 0;
}

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

bool withBitVector(string str){
    /* 
    Reduce el espacio usado en un factor de 8
    256 posibles ascii. Por cada uno que encuentre activo 
    un 1 (true) en la posicion que le corresponde.
    Si la proxima letra esta activada entonces esta repetida
    */
    bitset<256> bits(0); 

    for(int i = 0;i<str.length();i++){
        if(bits.test(str[i]) > 0 ){
            return true;
        }
        bits.set(str[i]);   
    }  
    return false;


    cout<<bits<<" "<<bits.count()<<endl;

    return false;

}

bool noDataStructure(string str){
    for(int i = 0 ; i < str.length()-1 ;i++ ){
        for(int j = i+1 ; j<str.length() ;j++ ){
            if(str[i] == str[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    string test_str = "qqwertyui";

    bool result = noDataStructure(test_str);
    cout<<"Using no DS: ";
    result?cout<<"Si hay repetidas"<<endl:cout<<"NO hay repetidas"<<endl;

    result = withBitVector(test_str);
    cout<<"Using bit structure: ";
    result?cout<<"Si hay repetidas"<<endl:cout<<"NO hay repetidas"<<endl;

    
    return 0;
}

/*
TODO:
    [] Measure execution time
*/
#include<iostream>
using namespace std;

namespace f_namespace{
    void ffunc(){
        cout<<"Inside the fisrt_space"<<endl;
    }
}
namespace s_namespace{
    void sfunc(){
        cout<<"Inside the second_space"<<endl;
    }
}
int main(){
    f_namespace::ffunc();
    s_namespace::sfunc();

    return 0;
}// ||


// using namespace f_namespace;
// using namespace s_namespace;
// // ||
// //if nested
// //using namespace nsname1::nsname2;
// int main(){
//     ffunc();
//     sfunc();

//     return 0;
}

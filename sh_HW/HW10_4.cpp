//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct student{
//    char name[20];
//    int id;
//    char gen;
//    int kor,eng,math;
//};
//
//struct student sArr[100];
//int num = 0;
//
//int korBestScore(){
//    int idx;
//    int max = sArr[0].kor;
//
//    for(int i=0;i<num;i++){
//        if(max < sArr[i].kor){
//            max = sArr[i].kor;
//            idx = i;
//        }
//    }
//
//    return idx;
//}
//
//int engBestScore(){
//    int idx;
//    int max = sArr[0].eng;
//
//    for(int i=0;i<num;i++){
//        if(max < sArr[i].eng){
//            max = sArr[i].eng;
//            idx = i;
//        }
//    }
//
//    return idx;
//}
//
//int mathBestScore(){
//    int idx;
//    int max = sArr[0].math;
//
//    for(int i=0;i<num;i++){
//        if(max < sArr[i].math){
//            max = sArr[i].math;
//            idx = i;
//        }
//    }
//
//    return idx;
//}
//
//int main(){
//
//    int menu;
//    int korIdx;
//    int engIdx;
//    int mathIdx;
//    int inputID,inputIdx = 0;
//
//    while(true){
//        cout<<"1. Input 2. show 3. best score 4.male students 5. female students 6. update info"<<endl;
//        cout<<"select menu"<<endl;
//
//        cin>>menu;
//
//        switch(menu){
//            case 1:
//
//                cout<<"enter data for 5 students(name ID gender Korean English Math scores)"<<endl;
//                for(int i=0;i<5;i++){
//                    cin>>sArr[num].name>>sArr[num].id>>sArr[num].gen>>sArr[num].kor>>sArr[num].eng>>sArr[num].math;
//                    num++;
//                }
//                break;
//            case 2:
//
//                for(int i=0;i<num;i++){
//                    cout<<"student "<<i+1<<endl;
//                    cout<<"Name : "<<sArr[i].name<<" student ID: "<<sArr[i].id<<" gender : "<<sArr[i].gen<<endl;
//                    cout<<" Korean: "<<sArr[i].kor<<" English: "<<sArr[i].eng<<" Math "<<sArr[i].math<<endl;
//                }
//                break;
//
//            case 3:
//                korIdx = korBestScore();
//                engIdx = engBestScore();
//                mathIdx = mathBestScore();
//
//                cout<<"best score for Korean: "<<sArr[korIdx].name<<sArr[korIdx].kor<<endl;
//                cout<<"best score for English: "<<sArr[engIdx].name<<sArr[engIdx].eng<<endl;
//                cout<<"best score for Math: "<<sArr[mathIdx].name<<sArr[mathIdx].math<<endl;
//
//                break;
//
//            case 4:
//
//                for(int i=0;i<num;i++){
//                    if(sArr[i].gen == 'M'){
//                        cout<<"Name :"<<sArr[i].name<<" student ID: "<<sArr[i].id<<" gender : "<<sArr[i].gen<<endl;
//                        cout<<" Korean: "<<sArr[i].kor<<" English: "<<sArr[i].eng<<" Math : "<<sArr[i].math<<endl;
//                    }
//                }
//
//                break;
//
//            case 5:
//                for(int i=0;i<num;i++){
//                    if(sArr[i].gen == 'F'){
//                        cout<<"Name :"<<sArr[i].name<<" student ID: "<<sArr[i].id<<" gender : "<<sArr[i].gen<<endl;
//                        cout<<" Korean: "<<sArr[i].kor<<" English: "<<sArr[i].eng<<" Math : "<<sArr[i].math<<endl;
//                    }
//                }
//
//                break;
//
//            case 6:
//
//                cout<<"enter student ID"<<endl;
//                cin>>inputID;
//                for(int i=0;i<num;i++){
//                    if(sArr[i].id == inputID){
//                        inputIdx = i;
//                    }
//                }
//
//                cout<<"enter new data(name ID gender Korean English Math)"<<endl;
//                cin>>sArr[inputIdx].name>>sArr[inputIdx].id>>sArr[inputIdx].gen>>sArr[inputIdx].kor>>sArr[inputIdx].eng>>sArr[inputIdx].math;
//
//                break;
//
//            case 0:
//                exit(0);
//        }
//
//
//
//    }
//
//
//
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1

//def makeDimension(binaryData):
//return len(binaryData)-1

int makeDimension(char * binaryData){
    return strlen(binaryData) - 1;
}

//def makeExtensionData(binaryData,dimension):
//for i in range(dimension):
//binaryData = binaryData + "0"
//
//return binaryData

char * makeExtensionData(char * binaryData, int dimension){

    char * extension = (char*)malloc(sizeof(char) * dimension);

    for(int i=0;i<dimension;i++){
        *(extension + i) = '0';
    }

    char * extensionData = (char*)malloc(sizeof(char) * (strlen(binaryData) + strlen(extension)));

    extensionData = strcat(extensionData,binaryData);
    extensionData = strcat(extensionData,extension);

//    free(extension);

    return extensionData;
}

//def xorFunc(data1,data2):
//resultData = str()
//for i in range(len(data2)):
//if(data1[i] == data2[i]):
//resultData = resultData + "0"
//else:
//resultData = resultData + "1"
//
//return resultData

char * xorFunc(char * data1, char * data2){

    char * resultData = (char*)malloc(sizeof(char) * strlen(data2));

    for(int i=0;i < strlen(data2); i++){
        if(*(data1 + i) == *(data2 + i)){
            *(resultData + i) = '0';
        }else{
            *(resultData + i) = '1';
        }
    }

    return resultData;
}

//def softwareCrcRemainder(data,crcCode):
//dimension = makeDimension(crcCode)
//extensionData = makeExtensionData(data,dimension)
//
//print("Dimension : ",dimension,"extensionData : ",extensionData)
//
//while True:
//if len(extensionData) < len(crcCode):
//break
//
//if(extensionData[0] == "0"):
//extensionData = extensionData[1:]
//print("extensionData : ",extensionData)
//continue
//
//result = xorFunc(extensionData[0:len(crcCode)],crcCode)
//extensionData = result + extensionData[len(crcCode):]
//print("extensionData : ",extensionData)
//
//print("result : " ,extensionData)
//return extensionData

char* softwareCrcRemainder(char * data, char * crcCode){

    int dimension = makeDimension(crcCode);
    char * extensionData = makeExtensionData(data,dimension);

    while(TRUE){
        if(strlen(extensionData) < strlen(crcCode)){
            break;
        }

//        printf("extensionData.length : %ld, crcCode.length : %ld\n",strlen(extensionData),strlen(crcCode));

        if(extensionData[0] == '0'){
            extensionData = extensionData + 1;
//            printf("extensionData.length -> %ld\n",strlen(extensionData));
            continue;
        }

        char * result = (char*)malloc(sizeof(char) * strlen(data));
        char * xorData = xorFunc(extensionData,crcCode);

        strcpy(result,xorData);
        strcpy(extensionData,strcat(result,extensionData + strlen(crcCode)));
//        printf("extensionData : %s\n",extensionData);
//        free(xorData);
//        free(result);
    }


    return extensionData;
}

//def cutData(data,crcCode):
//crcCodeLen = len(crcCode)
//forLoop = int(len(data) / crcCodeLen)
//dataList = list()




int main(void){

    char tempData[100];
    int choice = 0;
    int frameDataLen = 0;
    char * data;
    char crcCode[6] = "10011";

//    char *data = "1101011011";
//    char *crcCode = "10011";

    printf("데이터 값을 입력해주세요.");
    scanf("%s",tempData);
    printf("나눗셈 방식 : 1, 하드웨어 방식 : 2 ==>");
    scanf("%d",&choice);

    frameDataLen = strlen(tempData);
    data = (char*)malloc(sizeof(char) * frameDataLen);
    strcpy(data,tempData);
    printf("Frame Data : %s, Generator : %s\n",data,crcCode);

//    int crcDimension = makeDimension(crcCode);
//    printf("%d\n",crcDimension);
//
//    char * extensionData = makeExtensionData(data,crcDimension);
//    printf("%s\n",extensionData);
//
//    char * xorData = xorFunc(extensionData,crcCode);
//    printf("%s\n",xorData);

    char * result = softwareCrcRemainder(data,crcCode);
    printf("result : %s\n",result);


//    free(data);
//    free(crcCode);
//    free(extensionData);
//    free(xorData);
//    free(result);
    return 0;
}



for i in range(forLoop):
dataList.append(data[(crcCodeLen*i):(crcCodeLen*(i+1))])

return dataList

        def resultXorInput(data,result = "0000"):
result = result + "0"
returnValue = xorFunc(data,result)
return returnValue

        def hardwareCrcRemainder(data,crcCode):

dataList = cutData(data,crcCode)
forLoop = 0
result = str()

for i in dataList:
forLoop += 1
print(forLoop,"st clock")

if(forLoop == 1):
result = softwareCrcRemainder(resultXorInput(i),crcCode)
else:
result = softwareCrcRemainder(resultXorInput(i,result),crcCode)

return result

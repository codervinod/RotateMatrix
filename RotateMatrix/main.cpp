//
//  main.cpp
//  RotateMatrix
//
//  Created by Vinod Gupta on 3/5/15.
//  Copyright (c) 2015 vinodg. All rights reserved.
//

#include <iostream>

#define MAX 5

void RotateMatrix(int matrix[MAX][MAX],int m)
{
    int high=m-1;
    for(int out=0;out<(m/2);++out,--high)
    {
        for(int in=out,x=0;in<high;++in,++x)
        {
            int t1=matrix[out][in];
            int t2=matrix[in][high];
            int t3=matrix[high][high-x];
            int t4=matrix[high-x][out];
            
            matrix[out][in]=t4;
            matrix[in][high]=t1;
            matrix[high][high-x]=t2;
            matrix[high-x][out]=t3;
        }
    }
}

void PrintMatrix(int matrix[MAX][MAX],int m)
{
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<m;++j)
        {
            std::cout<<matrix[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

int main(int argc, const char * argv[]) {
    int matrix[MAX][MAX] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    
    //int matrix[MAX][MAX] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    std::cout<<"Original"<<std::endl;
    PrintMatrix(matrix,MAX);
    
    RotateMatrix(matrix,MAX);
    
    std::cout<<"Rotated"<<std::endl;
    PrintMatrix(matrix,MAX);
    return 0;
}

//
//  main.cpp
//  删除重复的数
//
//  Created by 何忆源 on 2020/4/29.
//  Copyright © 2020 何忆源. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout<<"请输入要检测的数："<<std::endl;
    int number=0;
    int j=0;
    std::string a;//注意要用string类型
    std::cin>>a;
    
    for(int i=0;i<a.length();++i)
    {
        if(a[i]!=a[i+1]){
            j++;
            number=number*10+a[j]-'0';
        }
        //number=number*10+a[i-j]-'0';
    }
    std::cout<<"去除重复数字后的数字:";
    std::cout<<number<<std::endl;
    return 0;
}
//只能去除连续重的数字

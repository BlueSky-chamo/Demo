// @Version       :V1.0
// @Filename      :common.c
// @Date          :2017-4-21
// @Author        :Chamo
// @Description   :公共函数源文件

#include "common.h"
//  @Author ：chamo
//  @Date   ：2017-4-21
//  @function：简单延时
//  @Input        
	//Param1 ：延时时间
	//Param2 
	//Param3 
	//Param  
//  @Return：无返回值
void delay(unsigned int i)
{
	unsigned char j;
	for(i; i > 0; i--)  
		for(j = 255; j > 0; j--);
}
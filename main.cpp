#include <iostream>
#include "Utility.h"
#include "Result.h"

//outputFormat��operateType���費ͬ��ֵ���õ���ͬ�������ʽ��0-2)
int main() {
	CResult worker;
	int		outputFormat = 0;
	int		operateType = 2;
	char *in = "�����й��ˡ�";
	char result[1000];
	worker.m_nOperateType = operateType;
	worker.m_nOutputFormat = outputFormat;
	worker.ParagraphProcessing(in, result);
	std::cout<<result<<std::endl;
	return 0;
}

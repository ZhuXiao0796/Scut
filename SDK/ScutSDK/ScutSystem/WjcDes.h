//////////////////////////////////////////////////////////////////////////
/*
    Provided by ������, Northeastern University (www.neu.edu.cn)
    Email: blackdrn@sohu.com
	This product is free for use.
*/
//////////////////////////////////////////////////////////////////////////

enum	{ENCRYPT,DECRYPT};

//////////////////////////////////////////////////////////////////////////

// ��/���� Type��ENCRYPT:����,DECRYPT:����
void Des_Run(char Out[8], char In[8], bool Type=ENCRYPT);
// ������Կ
void Des_SetKey(const char Key[8]);

//////////////////////////////////////////////////////////////////////////


#include<windows.h>
//�мǣ�������<windows.h>ʱ����Ҫ����MFC����Afx.h)
int main()
{
    int result = MessageBox( NULL , TEXT("111") , TEXT("1") , MB_ICONINFORMATION|MB_YESNO);
    switch(result)/*ע�⣡ʹ��UnicodeӦ��TEXT��Χ�ִ�*/
{
    case IDYES:MessageBox(NULL,TEXT("YES"),TEXT("YES"),MB_OK);break;
    case IDNO:MessageBox(NULL,TEXT("NO"),TEXT("NO"),MB_OK);break;
}
return 0;
}

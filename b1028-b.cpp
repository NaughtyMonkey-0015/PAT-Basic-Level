#include <iostream>

using namespace std;

int main() 
{
    int n, cnt = 0;                 //cnt记录有效生日个数；
    cin >> n;
    string name, birth, maxname, minname, maxbirth = "1814/09/06", minbirth = "2014/09/06";         //用string类记录字符串；
    for (int i = 0; i < n; i++) 
    {
        cin >> name >> birth;
        if (birth >= "1814/09/06" && birth <= "2014/09/06")         //利用字符串的ASCII码判断先后顺序；
        {
            cnt++;
            if (birth >= maxbirth) 
            {
                maxbirth = birth;
                maxname = name;
            }
            if (birth <= minbirth) 
            {
                minbirth = birth;
                minname = name;
            }
        }
    }

    cout << cnt;
    if (cnt != 0) cout << " " << minname << " " << maxname;

    return 0;
}
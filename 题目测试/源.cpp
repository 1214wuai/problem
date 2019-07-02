#pragma warning(disable:4996)


//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1, s2, s3;
//	while (getline(cin, s3))
//	{
//		size_t pos = s3.find(" ");
//		s1 = s3.substr(0, pos);
//		s2 = s3.substr(pos + 1);
//		auto it = s1.begin();
//		auto it2 = s2.begin();
//		int arr1[26], arr2[26];
//		for (int i = 0; i < 26; i++)
//		{
//			arr1[i] = arr2[i] = 0;
//		}
//		for (; it != s1.end(); it++)
//		{
//			arr1[*it - 'A']++;
//		}
//		for (; it2 != s2.end(); it2++)
//		{
//			arr2[*it2 - 'A']++;
//		}
//		for (int i = 0; i<26; i++)
//		{
//			if (arr2[i] != 0)
//			{
//				if (arr1[i] < arr2[i])
//				{
//					cout << "No" << endl;
//					goto out;
//				}
//			}
//		}
//		cout << "Yes" << endl;
//	out:	;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//
//using namespace std;
//int string2int(string str) {
//	int sz = str.size();
//	const char* st = str.c_str();
//	int ret = 0;
//	int s = 1;
//	size_t i = 0;
//	if (st[i] == '0')
//		i++;
//	else if (st[0] == '-')
//	{
//		s = -1;
//		i++;
//	}
//	else if (st[0] == '+')
//		i++;
//	else
//		;
//	//while ((i<sz) && (st[i] <= '9' && st[i] >= '0'))
//	//{
//	//	ret = (st[i] - '0')+ret * 10;
//	//	i++;
//	//}
//	while (i < sz)
//	{
//		if (st[i] <= '9' && st[i] >= '0')
//		{
//			ret = (st[i] - '0') + ret * 10;
//			i++;
//		}
//		else if (st[i] == '.')
//			return ret;
//
//		else
//			return 0;
//	}
//	return ret * s;
//
//}
///******************************结束写代码******************************/
//
//
//int main() {
//	int res;
//
//	string _str("12.34");
//	//getline(cin, _str);
//
//	res = string2int(_str);
//	/*int res = 1;
//	for (int i = 0; i < 30; i++)
//	{
//		res *= 2;
//	}*/
//	cout << res << endl;
//	system("pause");
//	return 0;
//	//1073741824
//	//4294967295
//
//}
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	int x;
//	vector<int> V;
//	cin >> n;
//	if (n<1)
//		return 0;
//	int N = n;
//	while ((N)&&(cin >> x))
//	{
//		V.push_back(x);
//		N--;
//	}
//	if (n == 1)
//	{
//		cout << 0 << " " << 0 << endl;
//		return 0;
//	}
//	int count = 0;
//	int ret = 0;
//	int y = 0;
//	int i = 0;
//	int min = V[i];
//	int max = V[i];
//	for (i = 0; i < n; i++)
//	{
//		if (max <= V[i])
//		{
//			max = V[i];
//			if (i == n - 1)
//				goto out;
//			continue;
//		}
//out:		if(max != min)
//		count++;
//		y = max - min;
//		ret += y;
//		min = max = V[i];
//	}
//	cout << ret << " " << count << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void sort(vector<int>& v)
//{
//	int sz = v.size();
//	int i = 0, j = 0;
//	for (i = 1; i<sz; i++)
//	{
//		int tmp = v[i];
//		for (j = i; (j > 0) && (v[j-1]>tmp); j--)
//			v[j] = v[j-1];
//		v[j] = tmp;
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int n = 3 * n;
//	vector<int> v;
//	int x;
//	while (n--)
//	{
//		scanf("%d", &x);
//		v.push_back(x);
//	}
//	sort(v);
//	int count = 0;
//	int index = n ;
//	while (n--)
//	{
//		count += v[index];
//		index++;
//	}
//	cout << count;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	int arr[256];
//	for (int i = 0; i < 256; i++)
//	{
//		arr[i] = 0;
//	}
//	auto it = s2.begin();
//	for (; it != s2.end(); it++)
//	{
//		arr[*it]++;
//	}
//	string s3;
//	auto it1 = s1.begin();
//	for (; it1 != s1.end(); it1++)
//	{
//		if (arr[*it1] == 0)
//			s3 += *it1;
//
//	}
//	cout << s3<< endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int* p;
//	p = new int(5);
//
//	int*p1;
//	//*p1 = new int(5);
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> V;
//	int x;
//
//	if (n<1)
//	{
//		cout << n;
//		return 0;
//	}
//	if (n == 2)
//	{
//		cout << 1;
//		return 0;
//	}
//	while (n--)
//	{
//		//cin >> x;
//		scanf("%d", &x);
//		V.push_back(x);
//	}
//	int count = 0;
//	int i = 1;
//	for (; i<V.size() - 1; i++)
//	{
//		if (V[i] >= V[i - 1] && V[i + 1]>=V[i])
//		{
//			continue;
//		}
//		if (V[i] <= V[i - 1] && V[i + 1] <= V[i])
//		{
//			continue;
//		}
//		count++;
//	}
//	i -= 1;
//	if ((V[i] >= V[i - 1] && V[i] >= V[i + 1]) || (V[i] <= V[i - 1] && V[i] <= V[i + 1]))
//		count += 1;
//
//	cout << count << endl;
//	system("pause");
//	return 0;
//}


////字符串逆置
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//void rever(string::iterator be, string::iterator en)
//{
//	while (be < en)
//	{
//		char tmp = *be;
//		*be = *en;
//		*en = tmp;
//		be++;
//		en--;
//	}
//}
//
//void reverse(string & s)
//{
//	rever(s.begin(), s.end() - 1);
//	auto it = s.begin();
//	while (it != s.end())
//	{
//		auto start = it;
//		for (; it != s.end() && *it != ' '; it++)
//			;
//		rever(start, it - 1);
//		if(it!=s.end())
//			it++;
//	}
//}
//int main()
//{
//	string s;
//	getline(cin, s);
//	reverse(s);
//	cout << s<< endl;
//
//	return 0;
//}



//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	string ret;
//	string tmp;
//
//	for (auto e : str)
//	{
//		if (e >= '0' && e <= '9')
//		{
//			tmp += e;
//			if (e == str[str.size() - 1])
//				if (ret.size()<tmp.size())
//					ret = tmp;
//			continue;
//		}
//		if (ret.size()<tmp.size())
//			ret = tmp;
//		tmp = "";
//	}
//	cout << ret;
//	system("pause");
//	return 0;
//}
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> V;
//	int ret=0;
//	int x = 0;
//	while (scanf("%d",&x))
//	{
//
//		V.push_back(x);
//	}
//	for (auto e : V)
//	{
//		;
//	}
//	cout << ret;
//	return 0;
//}


//进制转换
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//void revers(string &s)
//{
//	auto be = s.begin();
//	auto en = s.end()-1;
//	//char tmp = s.begin();
//	while (be<en)
//	{
//		char tmp = *be;
//		*be = *en;
//		*en = tmp;
//		be++;
//		en--;
//	}
//}
//int main()
//{
//	vector<int> V;
//	string s;
//	V.resize(2);
//	for (int i = 0; i < 2; i++)
//	{
//		cin >> V[i];
//	}
//	if (V[1]<10)
//	{
//		int x = V[0] % V[1];
//		s += '0' + x;
//		int y = V[0] / V[1];
//		while (y >= V[1])
//		{
//			x = y % V[1];
//			s += '0' + x;
//			y /= V[1];
//		}
//		//if(y>0)
//		s += '0' + y;
//		revers(s);
//		cout << s << endl;
//	}
//	if (V[1] == 10)
//	{
//		cout << V[0];
//	}
//	if (V[1] > 10)
//	{
//
//		int x = V[0] % V[1];
//		if (x >= 10)
//		{
//			s += 'A' + (x - 10);
//		}
//		else
//			s += '0' + x;
//		int y = V[0] / V[1];
//		while (y >= V[1])
//		{
//			x = y % V[1];
//			if (x >= 10)
//			{
//				s += 'A' + (x - 10);
//			}
//			else
//				s += '0' + x;
//			y /= V[1];
//		}
//		if (y >= 10)
//			s += 'A' + (y - 10);
//		else
//			s += '0' + y;
//		revers(s);
//		int i = 0;
//		while (s[i] == '0')
//		{
//			i++;
//		}
//		string s1 = s.substr(i, s.size() - i);
//		cout << s1 << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//class A {
//public:
//	A(const char* s1)
//	{
//		cout << s1 << endl;
//	}
//	~A()
//	{}
//};
//
//class B :virtual public A {
//public:
//	B(const char* s1, const char* s2)
//		:A(s1)
//	{
//		cout << s2 << endl;
//	}
//};
//class C :virtual public A {
//public:
//	C(const char* s1, const char* s2)
//		:A(s1)
//	{
//		cout << s2 << endl;
//	}
//};
//
//
//class D :public B, public C {
//public:
//	D(const char* s1, const  char* s2, const  char* s3,const  char* s4)
//		:B(s1,s2)
//		,C(s1,s3)
//		,A(s1)
//	{
//		cout << s4 << endl;
//	}
//};
//int main()
//{
//	D*p = new D("A", "B", "C", "D");
//	delete p;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int N = n;
//	vector<int> V;
//	V.resize(n);
//	for (int i = 0; i<n; i++)
//		cin >> V[i];
//	int max = 0;
//	int count = 0;
//	for (int i = 0; i<n; i++)
//	{
//		if (V[i] >= 0)
//		{
//			count += V[i];
//			if (count>max)
//			{
//				max = count;
//			}
//		}
//		else
//		{
//			count = 0;
//		}
//	}
//	cout << max;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<string> V;
//	V.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> V[i];
//	}
//	int flag1 = 1;
//	int flag2 = 1;
//	if (n>1)
//	{
//		for (int i = 1; i<n; i++)
//		{
//			if (V[i - 1]>V[i])
//			{
//				flag1 = 0;
//				break;
//			}
//		}
//		for (int i = 1; i<n; i++)
//		{
//			if (V[i - 1].size() > V[i].size())
//			{
//				flag2 = 0;
//				break;
//			}
//		}
//	}
//	if (flag1 == 1 && flag2 == 1)
//		cout << "both" << endl;
//	if (flag1 == 1 && flag2 == 0)
//		cout << "lexicographically" << endl;
//	if (flag1 == 0 && flag2 == 1)
//		cout << "lengths" << endl;
//	else
//		cout << "none" << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	if (n < 0)
//		n = -n;
//	int count = 0;
//	int max = 0;
//	int x = 1;
//	for (int i = 0; i < 32; i++)
//	{
//		if (max<count)
//			max = count;
//		if ((x&n) >= 1)
//		{
//			count++;
//		}
//		else
//			count = 0;
//		x = x << 1;
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void reserve1(string &s)
//{
//	int sz = s.size();
//	for (int i = 0; i < sz / 2; i++)
//	{
//		char tmp = s[i];
//		s[i] = s[sz -i -1];
//		s[sz -i -1] = tmp;
//	}
//}
//int binInsert(int n, int m, int j, int i) {
//	// write code here
//	string sn, sm;
//	while (n > 1)
//	{
//		int x = n % 2;
//		if (x == 0)
//			sn += '0';
//		else
//			sn += '1';
//		n /= 2;
//		if (n == 1)
//			sn += '1';
//	}
//	while (m > 1)
//	{
//		int x = m % 2;
//		if (x == 0)
//			sm += '0';
//		else
//			sm += '1';
//		m /= 2;
//		if (m == 1)
//			sm += '1';
//	}
//	reserve1(sn);
//	reserve1(sm);
//	int k = j;
//	int szn = sn.size();
//	int szm = sm.size();
//	for (j; j <= i; j++)
//	{
//		sn[szn-j-1] = sm[szm -(j - k)-1];
//	}
//	int ret = 0;
//	for (int l = 0; l < sn.size(); l++)
//	{
//		ret = ret * 2 + (sn[l] - '0');
//	}
//	return ret;
//}
//int main()
//{
//	int ret = binInsert(1024, 19, 2, 6);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int rev(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//
//	if ((n<0) || (n % 2 == 1))
//		return 0;
//	int count = 0;
//	int min = n;
//	int a = 0;
//	int b = 0;
//	int i = 1;
//	int flag1 = 1;
//	int flag2 = 1;
//	while (i<n)
//	{
//		int j = n - i;
//		count = j - i;
//		
//		if (count<0)
//			break;
//		flag1 = rev(i);
//		flag2 = rev(j);
//		if (flag1 && flag2 && min > count)
//		{
//			min = count;
//			a = i;
//			b = j;
//		}
//		i += 2;
//	}
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	//int n[][3] = { 1,2,3,4,5,6 };
//	//int(*p)[3];
//	//p = n;
//	int a;
//	float b, c;
//	scanf("%2d%3f%4f", &a, &b, &c);
//	printf("\na=%d, b=%f, c=%f\n", a, b, c);
//	printf("\na=%d, b=%d, c=%f\n", a, b, c);
//	printf("\na=%d, b=%f, c=%f\n", a, b, c);
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int gcd(int a, int b)
//{
//	int r;
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	return b;
//}
//
//int main()
//{
//	int a, b;
//	while (cin >> a >> b)
//	{
//		cout << a * b / gcd(a, b) << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int g(int N, int M)
//{
//	vector<int> V;
//	for (int i = 2; i<N; i++)
//	{
//		if (N%i == 0)
//			V.push_back(i);
//	}
//	static int min = 10000;
//	static int count = 0;
//
//	for (int i = 0; i<V.size(); i++)
//	{
//		int n = N;
//		n += V[i];
//		count++;
//		if (n<M)
//		{
//			min = g(n, M);
//		}
//		else if (n == M)
//		{
//			if (min > count)
//			{
//				min = count;
//			}
//			count = 0;
//			return min;
//		}
//		else
//		{
//			cout << -1;
//			return -1;
//		}
//	}
//}
//int main()
//{
//	int N, M;
//	//cin >> N >> M;
//	N = 4;
//	M = 24;
//	if (M <= N)
//	{
//		cout << -1;
//		return 0;
//	}
//	int ret = g(N, M);
//	cout << ret;
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////6.3
//6.3

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int year, month, day;
//	cin >> year >> month >> day;
//	if (year<1 || month<1 || month > 12)
//		return -1;
//	int day1[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//闰年
//	int day2[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int days = 0;
//	if (year % 400 == 0 || ((year % 100 != 0) && (year % 4 == 0)))//闰年
//	{
//		for (int i = 0; i<month - 1; i++)
//		{
//			days += day1[i];
//		}
//		if (day>day1[month - 1])
//			return -1;
//		days += day;
//	}
//	else
//	{
//		for (int i = 0; i<month - 1; i++)
//		{
//			days += day2[i];
//		}
//		if (day>day2[month - 1])
//			return -1;
//		days += day;
//	}
//	cout << days;
//	system("pause");
//	return 0;
//}

//#include < iostream>
//#define SQR(A) A*A 
//using namespace std;
//struct st_task {
//	uint16_t id;
//	uint32_t value;
//	uint64_t timestamp;
//};
//void fool() 
//{
//	st_task task = {};
//	uint64_t a = 0x00010001;
//	memcpy(&task, &a, sizeof(uint64_t));
//	printf("%11u,%11u,%11u", task.id, task.value, task.timestamp);
//}
//void func(const int& v1, const int& v2)
//{ 
//	std::cout << v1 << ' ';
//	std::cout << v2 << ' ';
//}
//
//
//int main()
//{     
//	//int x=6,y=3,z=2;
//	//x/=(SQR(y + z) / SQR(y + z));
//	////cout<< x<< endl;
//	//fool();
//	int i = 0;
//	func(++i, i++);
//	system("pause");
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////6.4
//#include<iostream>
//
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int count = 0;
//	//if (n <0)
//	//{
//	//	n = -n;
//	//	count++;
//	//}
//	//while (n>0)
//	//{
//	//	int x = n % 2;
//	//	if (x == 1)
//	//		count++;
//	//	n /= 2;
//	//	//if (n == 1)
//	//	//	count++;
//	//}
//	int x = 1;
//	for (int i = 0; i < 32; i++)
//	{
//		int y = x & n;
//		if (y >= 1)
//			count++;
//		x = x<<1;
//	}
//	int i = 1;
//	
//	cout << count;
//	system("pause");
//	return 0;
//}

////////////////////////////////////////////////////////6.7
//杨辉三角的变形

//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//	while (cin >> n)
//	{
//		m = 2 * n - 1;
//		vector<vector<int>> dp(n, vector<int>(m, 0));
//		dp[0][0] = 1;
//		for (int i = 1; i < n; i++)
//		{
//			dp[i][0] = dp[i][2 * i] = 1;
//			for (int j = 1; j < 2 * i; j++)
//			{
//				if (j == 1)
//					dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
//				else
//					dp[i][j] = dp[i - 1][j - 2] + dp[i - 1][j - 1] + dp[i - 1][j];
//			}
//		}
//		int k;
//		for (k = 0; k < m; k++)
//		{
//			if (dp[n - 1][k] % 2 == 0 && dp[n - 1][k] != 0)
//			{
//				cout << k + 1 << endl;
//				break;
//			}
//		}
//		if (k == m)
//			cout << -1 << endl;
//	}
//	return 0;
//}

//超长整数相加
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//string addStrings(string num1, string num2)
//{
//	int i = num1.size() - 1;
//	int j = num2.size() - 1;
//	string result = "";
//	int carry = 0;
//	while (i >= 0 || j >= 0)
//	{
//		if (i >= 0)
//			carry += num1[i] - '0';
//		if (j >= 0)
//			carry += num2[j] - '0';
//		result += (char)(carry % 10 + '0');
//		carry /= 10;
//		i--;
//		j--;
//	}
//	if (carry == 1)
//		result += '1';
//	reverse(result.begin(), result.end());
//	return result;
//}
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		cout << addStrings(s1, s2) << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//class A
//{
//public:
//	static const int a = 8;
//	int b;
//};
//int main()
//{
//	int n;
//	cin >> n;
//	int m = 2 * n - 1;
//	vector<vector<int>> V(n, vector<int>(m, 0));
//	decltype(A::a) x = 5;
//	A y;
//	const decltype(y) b;
//	//b.b = 9;
//
//	return 0;
//}


//class Bonus {
//public:    
//	int getMost(vector<vector<int> > board)
//	{
//		int length = board.size();
//		int wideth = board[0].size();
//		//vector<vector<int>> allPrice(length, vector<int>(wideth, 0));
//		vector<vector<int>> allPrice;
//		for (int i = 0; i < length; i++) 
//		{
//			vector<int> tmp(wideth, 0);
//			allPrice.push_back(tmp);
//		}
//		allPrice[0][0] = board[0][0];
//		for (int i = 0; i < length; i++)
//		{
//			for (int j = 0; j < wideth; j++)
//			{
//				//如果是起点坐标，不做任何处理。
//				if (i == 0 && j == 0)
//					continue;
//				//如果走在行的临界边，也就是第一行，那么他只能向右走
//				//向右走的时候该点就要将后面的值加起来。
//				else if (i == 0)
//				{
//					allPrice[i][j] = allPrice[i][j - 1] + board[i][j];
//				}
//				//如果走在列的临界边，也就是第一列，那么他只能向下走 
//				//向下走的时候该点就要将上面的值加起来。
//				else if (j == 0)
//				{
//					allPrice[i][j] = allPrice[i - 1][j] + board[i][j];
//				}
//				else
//				{
//					//除去两个临界边，剩下的就是既能向右走，也能向下走，
//					//这时候就要考虑走到当前点的所有可能得情况，也就是走到当前点
//					//各自路径的和是不是这些所有到达该点路径当中最大的了。
//					allPrice[i][j] = max(allPrice[i][j - 1], allPrice[i - 1][j]) + board[i] [j];
//				}
//			}
//		}
//		// 返回最后一个坐标点的值，它就表示从左上角走到右下角的最大奖励 
//		return allPrice[length - 1][wideth - 1];
//	}
//};
//////////////////////////////////////////////////////////////////迷宫
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int n, m;
//vector<vector<int>> v;
//vector<vector<int>> path_tmp;
//vector<vector<int>> path_best;
//
//void Ma(int i, int j)
//{
//	v[i][j] = 1;
//	path_tmp.push_back({ i,j });
//	if (i == n - 1 && j == m - 1)
//		if (path_best.empty() || path_tmp.size() < path_best.size())
//			path_best = path_tmp;
//			
//	if (i - 1 >= 0 && v[i - 1][j] == 0)//shang
//		Ma(i - 1, j);
//	if (i + 1<n && v[i + 1][j] == 0)//xia
//		Ma(i + 1, j);
//	if (j - 1 >= 0 && v[i][j - 1] == 0)//zuo
//		Ma(i, j - 1);
//	if (j + 1 < m && v[i][j + 1] == 0)//shang
//		Ma(i, j + 1);
//	v[i][j] = 0;
//	path_tmp.pop_back();
//}
//int main()
//{
//	while(cin>>n>>m)
//	{
//	
//		v = vector<vector<int>>(n, vector<int>(m, 0));
//		path_best.clear();
//		path_tmp.clear();
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//				cin >> v[i][j];
//		}
//
//		Ma(0, 0);
//		for (auto e : path_best)
//		{
//			cout << '(' << e[0] << ',' << e[1] << ')' << endl;
//		}
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int N, M; //分别代表行和列
//vector<vector<int>> maze;//迷宫矩阵
//vector<vector<int>> path_temp;//存储当前路径，第一维表示位置
//vector<vector<int>> path_best;//存储最佳路径
//
//void MazeTrack(int i, int j)
//{
//	maze[i][j] = 1;//表示当前节点已走，不可再走 
//	path_temp.push_back({ i, j });//将当前节点加入到路径中 
//	if (i == N - 1 && j == M - 1) //判断是否到达终点
//		if (path_best.empty() || path_temp.size() < path_best.size())
//			path_best = path_temp;
//
//		if (i - 1 >= 0 && maze[i - 1][j] == 0)//探索向上走是否可行
//			MazeTrack(i - 1, j);
//		if (i + 1 < N && maze[i + 1][j] == 0)//探索向下走是否可行
//			MazeTrack(i + 1, j);
//		if (j - 1 >= 0 && maze[i][j - 1] == 0)//探索向左走是否可行
//			MazeTrack(i, j - 1);
//		if (j + 1 < M && maze[i][j + 1] == 0)//探索向右走是否可行
//			MazeTrack(i, j + 1);
//		maze[i][j] = 0;//恢复现场，设为未走
//		path_temp.pop_back();
//}
//int main()
//{
//	while (cin >> N >> M)
//	{
//		maze = vector<vector<int>>(N, vector<int>(M, 0));
//		path_temp.clear();
//		path_best.clear();
//		for (auto &i : maze)
//			for (auto &j : i)
//				cin >> j;
//		MazeTrack(0, 0);//回溯寻找迷宫最短通路 
//		for (auto i : path_best)
//			cout << '(' << i[0] << ',' << i[1] << ')' << endl;//输出通路
//	}
//	return 0;
//}
//class Solution {
//public:
//	bool hasPath(char* matrix, int rows, int cols, char* str)
//	{
//		if (matrix == nullptr || rows < 1 || cols < 1 || str == nullptr)
//			return false;
//		bool* visited = new bool[rows * cols];
//		for (int i = 0; i<rows*cols; i++)
//			visited[i] = false;
//
//		int PathLength = 0;
//		for (int row = 0; row < rows; row++)
//		{
//			for (int col = 0; col < cols; col++)
//			{
//				if (hashPathCore(matrix, rows, row, cols, col, PathLength, str, visited))
//					return true;
//			}
//		}
//		delete[] visited;
//		return false;
//	}
//
//	bool hashPathCore(const char* matrix, int rows, int row, int cols,
//		int col, int& PathLength, const char* str, bool* visited)
//	{
//		if (str[PathLength] == '\0')
//			return true;
//		bool hashpath = false;
//		if (row<0 || row >= rows || col<0 || col >= cols ||
//			matrix[row*cols + col] != str[PathLength] ||
//			visited[row*cols + col] == true)
//			return hashpath;
//		++PathLength;
//		visited[row*cols + col] = true;
//		hashpath = hashPathCore(matrix, rows, row - 1, cols, col, PathLength, str, visited) ||
//			hashPathCore(matrix, rows, row + 1, cols, col, PathLength, str, visited) ||
//			hashPathCore(matrix, rows, row, cols, col - 1, PathLength, str, visited) ||
//			hashPathCore(matrix, rows, row, cols, col + 1, PathLength, str, visited);
//		if (!hashpath)
//		{
//			--PathLength;
//			visited[row*cols + col] = false;
//		}
//		return hashpath;
//	}
//
//
//};
//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//		int sz = array.size();
//		vector<int> v1;
//		vector<int> v2;
//		for (int i = 0; i<sz; i++)
//		{
//			if (array[i] % 2 == 0)
//				v2.push_back(array[i]);
//			else
//				v1.push_back(array[i]);
//		}
//		int sz1 = v1.size();
//		for (int i = 0; i<sz1; i++)
//			array[i] = v1[i];
//		int sz2 = v2.size();
//		for (int i = 0; i<sz2; i++)
//			array[i + sz1] = v2[i];
//	}
//};

#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
	s:
		while (n >= 10)
		{
			count += n % 10;
			n /= 10;
		}
		count += n;
		if (count >= 10)
		{
			n = count;
			count = 0;
			goto s;
		}
		cout << count << endl;
	}
	return 0;
}
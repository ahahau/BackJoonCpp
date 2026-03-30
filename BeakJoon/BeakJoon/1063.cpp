#include <iostream>
using namespace std;

int inp; 
string kPos, pPos; 


int main() 
{
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	cin >> kPos >> pPos >> inp;
	string sinp;
	int kx = kPos[0] - 64, ky = kPos[1] - 48;
	int px = pPos[0] - 64, py = pPos[1] - 48;

	while (inp--)
	{
		cin >> sinp;
		int mx = 0, my = 0;

		switch (sinp[0])
		{
		case 'R':
			mx = 1;
			if (sinp[1] == 'T')
				my = 1;
			if (sinp[1] == 'B')
				my = -1;
			break;
		case 'L':
			mx = -1;
			if (sinp[1] == 'T')
				my = 1;
			if (sinp[1] == 'B')
				my = -1;
			break;
		case 'B':
			my = -1;
			break;
		case 'T':
			my = 1;
			break;
		}

		int ckx = kx + mx, cky = ky + my;
		int cpx = px + mx, cpy = py + my;

		if (ckx < 1 || ckx>8 || cky < 1 || cky>8)
			continue;
		if (ckx == px && cky == py)
		{
			if (cpx < 1 || cpx>8 || cpy < 1 || cpy>8)
				continue;
			px = cpx, py = cpy;
		}
		kx = ckx, ky = cky;
	}
	cout << (char)(kx + 64) << ky << '\n';
	cout << (char)(px + 64) << py;
}
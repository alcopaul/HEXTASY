#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	string h = "23696E636C756465203C696F73747265616D3E0D0A23696E636C756465203C737472696E673E0D0A23696E636C756465203C7374646C69622E683E0D0A23696E636C756465203C737464696F2E683E0D0A23696E636C756465203C737472696E672E683E0D0A7573696E67206E616D657370616365207374643B0D0A696E74206D61696E28290D0A7B0D0A09737472696E672068203D2022<223B0D0A09737472696E67206731203D2022223B0D0A09737472696E67206732203D2022223B0D0A096368617220675B5D203D20225F223B0D0A096368617220746162325B355D3B0D0A09737472696E6720746F6B656E203D20682E73756273747228302C20682E66696E6428223C2229293B0D0A09737472696E6720746F6B656E31203D20682E7375627374722828682E66696E6428223C2229202B2031292C20682E6C656E6774682829202D20682E66696E6428223C2229293B0D0A09737472696E67207374725B325D203D207B746F6B656E2C20746F6B656E317D3B0D0A09666F722028696E742069203D20303B2069203C20323B20692B2B290D0A097B0D0A09096966202869203D3D2031290D0A09097B0D0A0909096731202B3D20683B0D0A09097D0D0A0909666F722028696E742078203D20303B2078203C207374725B695D2E6C656E67746828293B2078203D2078202B2032290D0A09097B0D0A0909096732203D2022307822202B207374725B695D2E73756273747228782C2032293B0D0A0909097374726370795F7328746162322C2067322E635F7374722829293B0D0A090909737072696E74665F7328672C20222563222C20737472746F6C28746162322C204E554C4C2C20313629293B0D0A0909096731202B3D20673B0D0A09097D0D0A097D0D0A09636F7574203C3C206731203C3C20656E646C3B0D0A09636861722063203D206765746368617228293B0D0A0D0A7D0D0A";
	string g1 = "";
	string g2 = "";
	char g[] = "_";
	char tab2[5];
	string token = h.substr(0, h.find("<"));
	string token1 = h.substr((h.find("<") + 1), h.length() - h.find("<"));
	string str[2] = {token, token1};
	for (int i = 0; i < 2; i++)
	{
		if (i == 1)
		{
			g1 += h;
		}
		for (int x = 0; x < str[i].length(); x = x + 2)
		{
			g2 = "0x" + str[i].substr(x, 2);
			strcpy_s(tab2, g2.c_str());
			sprintf_s(g, "%c", strtol(tab2, NULL, 16));
			g1 += g;
		}
	}
	cout << g1 << endl;
	char c = getchar();

}

//#include <iostream>
//using namespace std;
//int main()
//{
//	// ���ڴ��������Ĵ���
//	int count = 0;
//	// int a[31][51]={{VLPWJVVNNZSWFGHSFRBCOIJTPYNEURPIGKQGPSXUGNELGRVZAG},{SDLLOVGRTWEYZKKXNKIRWGZWXWRHKXFASATDWZAPZRNHTNNGQF},{ZGUGXVQDQAEAHOQEADMWWXFBXECKAVIGPTKTTQFWSWPKRPSMGA},{BDGMGYHAOPPRRHKYZCMFZEDELCALTBSWNTAODXYVHQNDASUFRL},{YVYWQZUTEPFSFXLTZBMBQETXGXFUEBHGMJKBPNIHMYOELYZIKH},{ZYZHSLTCGNANNXTUJGBYKUOJMGOGRDPKEUGVHNZJZHDUNRERBU},{XFPTZKTPVQPJEMBHNTUBSMIYEGXNWQSBZMHMDRZZMJPZQTCWLR},{ZNXOKBITTPSHEXWHZXFLWEMPZTBVNKNYSHCIQRIKQHFRAYWOPG},{MHJKFYYBQSDPOVJICWWGGCOZSBGLSOXOFDAADZYEOBKDDTMQPA},{VIDPIGELBYMEVQLASLQRUKMXSEWGHRSFVXOMHSJWWXHIBCGVIF},{GWRFRFLHAMYWYZOIQODBIHHRIIMWJWJGYPFAHZZWJKRGOISUJC},{EKQKKPNEYCBWOQHTYFHHQZRLFNDOVXTWASSQWXKBIVTKTUIASK},{PEKNJFIVBKOZUEPPHIWLUBFUDWPIDRJKAZVJKPBRHCRMGNMFWW},{CGZAXHXPDELTACGUWBXWNNZNDQYYCIQRJCULIEBQBLLMJEUSZP},{RWHHQMBIJWTQPUFNAESPZHAQARNIDUCRYQAZMNVRVZUJOZUDGS},{PFGAYBDEECHUXFUZIKAXYDFWJNSAOPJYWUIEJSCORRBVQHCHMR},{JNVIPVEMQSHCCAXMWEFSYIGFPIXNIDXOTXTNBCHSHUZGKXFECL},{YZBAIIOTWLREPZISBGJLQDALKZUKEQMKLDIPXJEPENEIPWFDLP},{HBQKWJFLSEXVILKYPNSWUZLDCRTAYUUPEITQJEITZRQMMAQNLN},{LXYPCVPNUKSWCCGXEYTEBAWRLWDWNHHNNNWQNIIBUCGUJYMRYW},{CZDKISKUSBPFHVGSAVJBDMNPSDKFRXVVPLVAQUGVUJEXSZFGFQ},{IYIJGISUANRAXTGQLAVFMQTICKQAHLEBGHAVOVVPEXIMLFWIYI},{ZIIFSOPCMAWCBPKWZBUQPQLGSNIBFADUUJJHPAIUVVNWNWKDZB},{HGTEEIISFGIUEUOWXVTPJDVACYQYFQUCXOXOSSMXLZDQESHXKP},{FEBZHJAGIFGXSMRDKGONGELOALLSYDVILRWAPXXBPOOSWZNEAS},{VJGMAOFLGYIFLJTEKDNIWHJAABCASFMAKIENSYIZZSLRSUIPCJ},{BMQGMPDRCPGWKTPLOTAINXZAAJWCPUJHPOUYWNWHZAKCDMZDSR},{RRARTVHZYYCEDXJQNQAINQVDJCZCZLCQWQQIKUYMYMOVMNCBVY},{ABTCRRUXVGYLZILFLOFYVWFFBZNFWDZOADRDCLIRFKBFBHMAXX}}
//	char a[30][50];
//	for (int i = 0; i < 30; i++){
//		for (int j = 0; j < 50; j++){
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < 30; i++){
//		for (int j = 0; j < 50; j++){
//			for (int k = 1; k < 50; k++){
//				if (a[i][j] < a[i][k]){
//					count++;
//				}
//			}
//		}
//	}
//	for (int j = 0; j < 50; j++){
//		for (int i = 0; i < 30; j++){
//			for (int k = 1; k < 30; k++){
//				if (a[j][i] < a[j][k]){
//					count++;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 30; i++){
//		for (int j = 0; j < 50; j++){
//			for (int k = 1; i + k < 50 && j + k < 30; k++){
//				if (a[i][j] < a[i + k][k + j]){
//					count++;
//				}
//			}
//		}
//	}
//	for (int i = 30; i>0; i++){
//		for (int j = 0; j < 50; j++){
//			for (int k = 1; i - k > 0 && j + k < 50; k++){
//				if (a[i][j] < a[i - k][j + k]){
//					count++;
//				}
//			}
//		}
//	}
//	cout << count << endl;
//	return 0;
//}
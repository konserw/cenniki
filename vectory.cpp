#include <vector>
#include <string>

void vectory(std::vector<std::vector<std::string> >& menu_items,
             std::vector<std::vector<std::vector<std::string> > >& div,
             std::vector<std::vector<std::vector<std::string> > >& pliki)
{
//tworzebnie vectora
    std::vector<std::string> temp;
    std::vector<std::vector<std::string> > zbiorowy;

    temp.push_back("FIP_Spot.mpg");
    temp.push_back("about-us.pdf");
    temp.push_back("Handbook_raccordi.pdf");
    temp.push_back("Handbook_valvole.pdf");
	menu_items.push_back(temp);
	temp.clear();
    temp.push_back("Brochure_VKD.pdf");
    temp.push_back("Brochure_TKD.pdf");
    temp.push_back("Brochure_MK-CP.pdf");
    temp.push_back("Brochure_VEE.pdf");
    temp.push_back("Brochure_VXE.pdf");
    temp.push_back("Brochure_labelling_system.pdf");
    temp.push_back("Brochure_FS_FC.pdf");
	menu_items.push_back(temp);
	temp.clear();	
/*
###########################
###		zbiorowy		###
###########################
*/
//menu zbiorowy[0][0]
    temp.push_back("FIP spot");
    temp.push_back("O FIP-ie");
    temp.push_back("Podr�cznik kszta�tek");
    temp.push_back("Podr�cznik zawor�w");
    temp.push_back("Broszury");
    temp.push_back("Katalogi techniczne");
    temp.push_back("Kontakt");
    temp.push_back("Kemy");
	zbiorowy.push_back(temp);
//produkty menu zbiorowy [0][1]
	temp.clear();
    temp.push_back("Zawory z nap�dami");
    temp.push_back("Zawory r�czne z PVC-U");
    temp.push_back("Kszta�tki PVC-U");
    temp.push_back("System PP-H");
    temp.push_back("System PVC-C TemperFIP100\xAE");
    temp.push_back("System PVDF");
    temp.push_back("System PE-HD");
    temp.push_back("System ABS");
	zbiorowy.push_back(temp);
//menu broszury [0][2]
	temp.clear();
    temp.push_back("VKD - Zawory kulowe DualBlock\xAE");
    temp.push_back("TKD - Zawory kulowe tr�jdrozne DualBlock\xAE");
    temp.push_back("MK/CP - Zawory membranowe pneumatyczne z nap�dem t�okowym");
    temp.push_back("VEE - Zawory kulowe Easyfit\xAE");
    temp.push_back("VXE - Zawory kulowe Easyfit\xAE");
    temp.push_back("System etykiet do zawor�w Easyfit\xAE");
    temp.push_back("FS-FC - Rotametry");
	zbiorowy.push_back(temp);
//#################################
//# system PE - zbiorowy [0][3] #
//#################################
	temp.clear();
    temp.push_back("Kszta�tki doczo�owe");
    temp.push_back("Z��czki elektrooporowe FRIALEN�");
    temp.push_back("Wytyczne dla projektant�w");
	zbiorowy.push_back(temp);
//#################################
//# system ABS - zbiorowy [0][4] #
//#################################
	temp.clear();
    temp.push_back("Informacje og�lne");
    temp.push_back("System metryczny");
    temp.push_back("System calowy");
    temp.push_back("System preizolowany");
    temp.push_back("Klejenie");
	zbiorowy.push_back(temp);
	div.push_back(zbiorowy);
	zbiorowy.clear();
//################################
//# actuaded zawory zbiorowy [1] #
//################################
	temp.clear();
    temp.push_back("Si�owniki Elektryczne");
    temp.push_back("Si�owniki Pneumatyczne");
    temp.push_back("Zawory bezpiecze�stwa");
    temp.push_back("Rotametry");
	zbiorowy.push_back(temp);
//elektryczna co�tam zbiorowy
	temp.clear();
    temp.push_back("Zawory kulowe");
    temp.push_back("Przepustnice");
    temp.push_back("Elektrozawory");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//zawory kulowe
	temp.clear();
    temp.push_back("VKD/CE - Zaw�r kulowy Dual Block \xAE DN 10-50 z si�ownikiem elektrycznym");
    temp.push_back("VKD/CE - Zaw�r kulowy Dual Block \xAE DN 65-100 z si�ownikiem elektrycznym");
    temp.push_back("TKD/CE - Tr�jdro�ny zaw�r kulowy Dual Block \xAE z si�ownikiem elektrycznym");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//zawory motylkowe
	temp.clear();
    temp.push_back("FE/CE");
    temp.push_back("FK/CE");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//zawory cewkowe
	temp.clear();
    temp.push_back("S1-S2");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//pneumatyczne costam zbiorowy
	temp.clear();
    temp.push_back("Zawory kulowe");
    temp.push_back("Przepustnice");
    temp.push_back("Zawory membranowe");
    temp.push_back("Zawory sko�ne");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//kulowe
	temp.clear();
    temp.push_back("VKD/CE - Zaw�r kulowy Dual Block \xAE DN 10-50 z si�ownikiem pneumstycznym");
    temp.push_back("VKD/CE - Zaw�r kulowy Dual Block \xAE DN 65-100 z si�ownikiem pneumstycznym");
    temp.push_back("TKD/CE - Tr�jdro�ny zaw�r kulowy Dual Block \xAE z si�ownikiem pneumstycznym");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//motylkowe
	temp.clear();
    temp.push_back("FE/CP");
    temp.push_back("FK/CP");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//diaco�tam
	temp.clear();
    temp.push_back("VM/CP-NC - Zaw�r membranowy pneumatyczny normalnie zamkni�ty");
    temp.push_back("VM/CP-NO - Zaw�r membranowy pneumatyczny normalnie otwarty");
    temp.push_back("MK/CP-NC - Zaw�r membranowy pneumatyczny normalnie zamkniety z si�ownikiem t�okowym");
    temp.push_back("MK/CP-NO - Zaw�r membranowy pneumatyczny normalnie otwarty z si�ownikiem t�okowym");
    temp.push_back("MK/CP-DA - Zaw�r membranowy pneumatyczny obustronego dzia�ania z si�ownikiem t�okowym");
    temp.push_back("DM/CP-NO - Zaw�r membranowy pneumatyczny normalnie otwarty bezspr�ynowy");
    temp.push_back("CM/CP - Zaw�r membranowy pneumatyczny - kompaktowy");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//k�towy 
	temp.clear();
    temp.push_back("VV/CP - zawory sko�ne pneumatyczne");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//relief zbiorowy
	temp.clear();
    temp.push_back("SV - Zaw�r sko�ny upustowy");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//przep�ywomierze zbiorowy
	temp.clear();
    temp.push_back("FS - rotametry standartowe");
    temp.push_back("FC - rotametry kr�tkie");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
	div.push_back(zbiorowy);
	zbiorowy.clear();
//#################################
//# manualne zawory zbiorowy [2] #
//#################################
	temp.clear();
    temp.push_back("Informacje og�lne");
    temp.push_back("Zawory kulowe");
    temp.push_back("Przepustnice");
    temp.push_back("Zawory membranowe");
    temp.push_back("Zawory zwrotne");
    temp.push_back("Filtry");
    temp.push_back("Pozosta�e zawory");
	zbiorowy.push_back(temp);
//kulowe
	temp.clear();
    temp.push_back("VKD PVC-U - Zawory kulowe Dual Block\xAE DN 10-50");
    temp.push_back("VKD PVC-U - Zawory kulowe Dual Block\xAE DN 65-100");
    temp.push_back("TKD PVC-U - Tr�jdro�ne zawory kulowe Dual Block\xAE");
    temp.push_back("VEE PVC-U - Zawory kulowe serii Easyfit");
    temp.push_back("VE PVC-U - Zawory kulowe DN 65-100");
    temp.push_back("VXE PVC-U - Zawory kulowe serii Easyfit");
    temp.push_back("VX PVC-U - Zawory kulowe serii Ergo DN 65-100");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//przepustnice
	temp.clear();
    temp.push_back("FE PVC-U");
    temp.push_back("FK PVC-U");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//membranowe
	temp.clear();
    temp.push_back("VM PVC-U - Zawory membranowe");
    temp.push_back("VM/RM-PVC-U - Mini zawory membranowe");
    temp.push_back("CM PVC-U - Kompaktowe zawory membranowe");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//bezpiecze�stwa
	temp.clear();
    temp.push_back("VR PVC-U - Zaw�r zwrotny");
    temp.push_back("SR PVC-U - Kulowy zaw�r zwrotny");
    temp.push_back("CR PVC-U - Klapa zwrotna");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//Filtry
	temp.clear();
    temp.push_back("RV PVC-U - Filtry siatkowe");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//Pozosta�e
	temp.clear();
    temp.push_back("VA PVC-U - Zawory odpowietrzaj�co napowietrzaj�ce");
    temp.push_back("VZ PVC-U - Zawory stopowe");
    temp.push_back("VV PVC-U - Zawory sko�ne");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
	div.push_back(zbiorowy);
	zbiorowy.clear();
//#################################
//# kszta�tki zbiorowy [3] #
//#################################
	temp.clear();
    temp.push_back("Informacje og�lne");
    temp.push_back("Instrukcja klejenia");
    temp.push_back("System metryczny");
    temp.push_back("System calowy");
	zbiorowy.push_back(temp);
//montaz pdf
	temp.clear();
    temp.push_back("");
	zbiorowy.push_back(temp);
//iso
	temp.clear();
    temp.push_back("Kszta�tki klejone");
    temp.push_back("Kszta�tki przejsciowe");
    temp.push_back("Kszta�tki gwintowe");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//BS
	temp.clear();
    temp.push_back("Kszta�tki klejone");
    temp.push_back("Kszta�tki przejsciowe");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
	div.push_back(zbiorowy);
	zbiorowy.clear();
//#################################
//# PP-H system - zbiorowy [4] #
//#################################
	temp.clear();
    temp.push_back("Informacje og�lne");
    temp.push_back("Instrukcje zgrzewania");
    temp.push_back("Rury i kszta�tki");
    temp.push_back("Zawory kulowe");
    temp.push_back("Przepustnice");
    temp.push_back("Zawory membranowe");
    temp.push_back("Zawory zwrotne");
    temp.push_back("Filtry");
	zbiorowy.push_back(temp);
//instrukcje
	temp.clear();
    temp.push_back("Zgrzewanie mufowe");
    temp.push_back("Zgrzewanie doczo�owe");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//rury
	temp.clear();
    temp.push_back("Rury");
    temp.push_back("Kszta�tki do zgrzewania mufowego");
    temp.push_back("Kszta�tki do zgrzewania doczo�owego");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//kulowe
	temp.clear();
    temp.push_back("VKD PP-H - Zawory kulowe Dual Block\xAE DN 10-50");
    temp.push_back("VKD PP-H - Zawory kulowe Dual Block\xAE DN 65-100");
    temp.push_back("TKD PP-H - Tr�jdro�ne zawory kulowe Dual Block\xAE");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//przepustnice
	temp.clear();
    temp.push_back("FK PP-H");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//membr
	temp.clear();
    temp.push_back("VM PP-H - Zawory membranowe");
    temp.push_back("CM PP-H - Kompaktowe zawory membranowe");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//bezp
	temp.clear();
    temp.push_back("VR PP-H - Zaw�r bezpiecze�stwa");
    temp.push_back("SR PP-H - Kulowy zaw�r bezpiecze�stwa");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//filtr
	temp.clear();
    temp.push_back("RV PP-H - Filtr siatkowy");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
	div.push_back(zbiorowy);
	zbiorowy.clear();
//#################################
//# temperfip - zbiorowy - [5] #
//#################################
	temp.clear();
    temp.push_back("Informacje og�lne");
    temp.push_back("Instrukcje klejenia");
    temp.push_back("Rury i kszta�tki");
    temp.push_back("Zawory kulowe");
    temp.push_back("Przepustnice");
    temp.push_back("Zawory membranowe");
    temp.push_back("Zawory zwrotne");
    temp.push_back("Filtry");
	zbiorowy.push_back(temp);
//klejenie
	temp.clear();
    temp.push_back("");
	zbiorowy.push_back(temp);
//rury
	temp.clear();
    temp.push_back("Rury");
    temp.push_back("Kszta�tki do klejenia");
    temp.push_back("Kszta�tki przej�ciowe");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//kulowe
	temp.clear();
    temp.push_back("VKD PVC-C - Zawory kulowe Dual Block\xAE DN 10-50");
    temp.push_back("VKD PVC-C - Zawory kulowe Dual Block\xAE DN 65-100");
    temp.push_back("TKD PVC-C - Tr�jdro�ne zawory kulowe Dual Block\xAE");
    temp.push_back("VXE PVC-C - Zawory kulowe serii Easyfit");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//przepustnice
	temp.clear();
    temp.push_back("FK PVC-C");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//membranowe
	temp.clear();
    temp.push_back("VM PVC-C - Zawory membranowe");
    temp.push_back("CM PVC-C - Kompaktowe zawory membranowe");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//bezp
	temp.clear();
    temp.push_back("SR PVC-C - Kulowy zaw�r zwrotny");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//filtr
	temp.clear();
    temp.push_back("RV PVC-C - Filtr siatkowy");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
	div.push_back(zbiorowy);
	zbiorowy.clear();
//#################################
//# PVDF system - zbiorowy [6] #
//#################################
	temp.clear();
    temp.push_back("Informacje og�lne");
    temp.push_back("Instrukcja zgrzewania");
    temp.push_back("Rury i kszta�tki");
    temp.push_back("Zawory kulowe");
    temp.push_back("Przepustnice");
    temp.push_back("Zawory membranowe");
    temp.push_back("Zawory zwrotne");
	zbiorowy.push_back(temp);
//instrukcje - pdf
	temp.clear();
    temp.push_back("");
	zbiorowy.push_back(temp);
//rury 
	temp.clear();
    temp.push_back("Rury");
    temp.push_back("Kszta�tki do zgrzewania mufowego");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//kulowe
	temp.clear();
    temp.push_back("VKD PVDF - Zawory kulowe Dual Block\xAE DN 10-50");
    temp.push_back("VKD PVDF - Zawory kulowe Dual Block\xAE DN 65-100");
    temp.push_back("TKD PVDF - Tr�jdro�ne zawory kulowe Dual Block\xAE");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//przepustnice
	temp.clear();
    temp.push_back("FK PVDF");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//membr
	temp.clear();
    temp.push_back("VM PVDF - Zawory membranowe");
    temp.push_back("CM PVDF - Kompaktowe zawory membranowe");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
//bezp
	temp.clear();
    temp.push_back("SR PVDF - Kulowy zaw�r zwrotny");
    temp.push_back("Powr�t");
	zbiorowy.push_back(temp);
	div.push_back(zbiorowy);
	zbiorowy.clear();
/*
###########################
###	pliki	zbiorowy	###
###########################
*/
	temp.clear();
    temp.push_back("VKD_CE_10-50.pdf");//[0][0][0]
    temp.push_back("VKD_CE_65-100.pdf");
    temp.push_back("TKD_CE.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("FE_CE.pdf");
    temp.push_back("FK_CE.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("S1_S2.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
    temp.push_back("VKD_CP_10-50.pdf");//[1][0][0]
    temp.push_back("VKD_CP_65-100.pdf");
    temp.push_back("TKD_CP.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("FE_CP.pdf");
    temp.push_back("FK_CP.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VM_CP_NC.pdf");
    temp.push_back("VM_CP_NO.pdf");
    temp.push_back("MK_CP.pdf");
    temp.push_back("MK_CP.pdf");
    temp.push_back("MK_CP.pdf");
    temp.push_back("DM_CP_NO.pdf");
    temp.push_back("CM_CP.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VV_CP.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
    temp.push_back("SV.pdf");//[2][0][0]
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
    temp.push_back("FS.pdf");//[3][0][0]
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("FC.pdf");//[3][1][0]
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
//p12
    temp.push_back("PVC-U_VALVES_general_info.pdf");//[4][0][0]
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VKD_PVC-U_10-50.pdf");
    temp.push_back("VKD_PVC-U_65-100.pdf");
    temp.push_back("TKD_PVC-U.pdf");
    temp.push_back("VEE_PVC-U.pdf");
    temp.push_back("VE_PVC-U_65-100.pdf");
    temp.push_back("VXE_PVC-U.pdf");
    temp.push_back("VX_PVC-U_65-100.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("FE_PVC-U.pdf");
    temp.push_back("FK_PVC-U.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VM_PVC-U.pdf");
    temp.push_back("VM-RM_PVC-U.pdf");
    temp.push_back("CM_PVC-U.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VR_PVC-U.pdf");
    temp.push_back("SR_PVC-U.pdf");
    temp.push_back("CR_PVC-U.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("RV_PVC-U.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VA_PVC-U.pdf");
    temp.push_back("VZ_PVC-U.pdf");
    temp.push_back("VV_PVC-U.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
//p13
    temp.push_back("PVC-U_FITTINGS_general_info.pdf");//[5][0][0]
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("PVC-U_cementing_instructions.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("PVC-U_ISO-UNI.pdf");
    temp.push_back("PVC-U_ISO-BSP.pdf");
    temp.push_back("PVC-U_BSP.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("PVC-U_BS.pdf");
    temp.push_back("PVC-U_BS.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
//p14
    temp.push_back("PP-H_general_info.pdf");//[6][0][0]
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("PP-H_SW_instructions.pdf");
    temp.push_back("PP-H_BW_instructions.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("PP-H_PIPES.pdf");
    temp.push_back("PP-H_ISO-UNI_SW.pdf");
    temp.push_back("PP-H_ISO-UNI_BW.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VKD_PP-H_10-50.pdf");
    temp.push_back("VKD_PP-H_65-100.pdf");
    temp.push_back("TKD_PP-H.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("FK_PP-H.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VM_PP-H.pdf");
    temp.push_back("CM_PP-H.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VR_PP-H.pdf");
    temp.push_back("SR_PP-H.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("RV_PP-H.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
//p15
    temp.push_back("PVC-C_general_info.pdf");//[7][0][0]
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("PVC-C_cementing_instructions.pdf");//[7][1][0]
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("PVC-C_PIPES.pdf");//[7][2][0]
    temp.push_back("PVC-C_ISO-UNI-BSP.pdf");
    temp.push_back("PVC-C_ISO-UNI-BSP.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VKD_PVC-C_10-50.pdf");
    temp.push_back("VKD_PVC-C_65-100.pdf");
    temp.push_back("TKD_PVC-C.pdf");
    temp.push_back("VXE_PVC-C.pdf");
    temp.push_back("VX_PVC-C_65-100");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("FK_PVC-C.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VM_PVC-C.pdf");
    temp.push_back("CM_PVC-C.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("SR_PVC-C.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("RV_PVC-C.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
//p16
    temp.push_back("PVDF_general_info.pdf");//[8][0][0]
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("PVDF_SW_instructions.pdf");//[8][1][0]
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("PVDF_PIPES.pdf");//820
    temp.push_back("PVDF_ISO-UNI_SW.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VKD_PVDF_10-50.pdf");//830
    temp.push_back("VKD_PVDF_65-100.pdf");
    temp.push_back("TK_PVDF.pdf");//832
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("FK_PVDF.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("VM_PVDF.pdf");
    temp.push_back("CM_PVDF.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
    temp.push_back("SR_PVDF.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
//p17
    temp.push_back("Akatherm_PE100.pdf");//[9][0][0]
    temp.push_back("FRIALEN.pdf");
    temp.push_back("Akatherm_Projektanci.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
//p18
    temp.push_back("ABS_ogolnie.pdf");//[10][0][0]
    temp.push_back("ABS_metryczny.pdf");
    temp.push_back("ABS_calowy.pdf");
    temp.push_back("ABS_preizolowany.pdf");
    temp.push_back("ABS_klejenie.pdf");
	zbiorowy.push_back(temp);
	temp.clear();
	pliki.push_back(zbiorowy);
	zbiorowy.clear();
}

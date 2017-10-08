#include <QtCore>
#include <iostream>
#include "gdal_priv.h"
#include "ogrsf_frmts.h"
using namespace std;

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	GDALAllRegister();
	OGRRegisterAll();
	cout << "GDAL and OGR Register Success!" << endl;
	

	cout << "hello world!" << endl;




	return a.exec();
}

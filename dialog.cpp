#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
///
/// 
#include <iostream>
#include <fstream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
std::vector<unsigned long long> list_neyronov;//(202);// = {};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
///
    try {

        
        unsigned long long n;    
        // std::vector<int>list_neyronov;
        ifstream file("/home/viktor/my_projects_qt_2/Funkciya_podachi_signalov_na_vhod/neyroni_i_signal.txt");
        if (!file) {
            std::cerr << "ERROR: Cannot open "
                         "'/home/viktor/my_projects_qt_2/"
                         "Funkciya_podachi_signalov_na_vhod/neyroni_i_signal.txt'!"
                      << std::endl;
             exit(1);
        }
        while (!file.eof()) 
        {        file >> n;        list_neyronov.push_back(n);        cout << n << endl;
        } 
        file.close();
     //   std::cout << list_neyronov[200] << std::endl;
        
    }
    catch (const std::exception &ex) {
        std::cerr << "Exception: '" << ex.what() << "'!" << std::endl;
          exit(1);
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for (int x=0; x<202;x++)
    {
         std::cout << list_neyronov[x] << std::endl;
    }
/// 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////     
}

Dialog::~Dialog()
{
    delete ui;
}


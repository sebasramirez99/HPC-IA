#ifndef FM_H
#define FM_H
#include <iostream>

class fm{
    /* Tamalo de la matriz*/
    //int tamanoM;
    std::string tamanoM;

public:
    fm(std::string tamano):
        tamanoM(tamano){}
    void muestra(std::string tamano);
    Eigen::MatrixXd initMatrix();
};

#endif // FM_H

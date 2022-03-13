#ifndef FM_H
#define FM_H
#include <iostream>
#include <eigen3/Eigen/Dense>

class fm{
    /* Tamalo de la matriz*/
    //int tamanoM;
    std::string tamanoM;

public:
    fm(std::string tamano):
        tamanoM(tamano){}

    Eigen::Matrix3i initMatrixA();
    Eigen::Matrix3i initMatrixB();
    Eigen::Matrix3i initMatrixAA();
    Eigen::Matrix3i initMatrixI();
    Eigen::Matrix3i initMatrixAAA();
    Eigen::Matrix3i potencia(Eigen::Matrix3i m, int n);
    Eigen::Matrix3d initMatrixAI();
    Eigen::MatrixXd initMatrixAE();
    Eigen::MatrixXd initMatrixBE();
    Eigen::MatrixXd initMatrixP();
    Eigen::MatrixXd initMatrixC();
    Eigen::MatrixXd initMatrixF1();
    Eigen::Matrix2d initMatrixAEI();
    Eigen::Matrix2d initMatrixBEI();
    Eigen::Matrix2d initMatrixCEI();
    Eigen::Matrix2d initMatrixIEI();


};

#endif // FM_H

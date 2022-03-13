#include "fm.h"
#include <iostream>
#include <eigen3/Eigen/Dense>

/* Funcion que se encarga de realizar la potencia de
 * una matrix dado el exponente,tiene como parametros una matrix de
 * tamaño 3x3 entera y n que es el numero del exponente */

Eigen::Matrix3i fm::potencia(Eigen::Matrix3i m, int n){
    if(n < 1)
            throw;
        if(n == 1)
            return m;
        return (m*potencia(m, n - 1));
}


/* Funcion que se encarga de asignar valores quemados
 * a una matriz 3x3 entera y la retorna */
Eigen::Matrix3i fm::initMatrixA(){
    Eigen::Matrix3i m;
    m << 2, 0, 1,
         3, 0, 0,
         5, 1, 1;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 3x3 entera y la retorna */
Eigen::Matrix3i fm::initMatrixB(){
    Eigen::Matrix3i m;
    m << 1, 0, 1,
         1, 2, 1,
         1, 1, 0;
    return m;
}

/* Funcion que se encarga de asignar valores quemados
 * a una matriz 3x3 entera y la retorna */
Eigen::Matrix3i fm::initMatrixAA(){
    Eigen::Matrix3i m;
    m << 0, 1, 1,
         1, 0, 1,
         1, 1, 0;
    return m;
}

/* Funcion que se encarga de asignar valores quemados
 * a una matriz 3x3 entera y la retorna  (Matriz Identidad)*/
Eigen::Matrix3i fm::initMatrixI(){
    Eigen::Matrix3i m;
    m << 1, 0, 0,
         0, 1, 0,
         0, 0, 1;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 3x3 entera y la retorna */
Eigen::Matrix3i fm::initMatrixAAA(){
    Eigen::Matrix3i m;
    m << 1, 0, 1,
         0, 1, 0,
         0, 0, 1;
    return m;
}

/* Funcion que se encarga de asignar valores quemados
 * a una matriz 3x3 entera y la retorna */
Eigen::Matrix3d fm::initMatrixAI(){
    Eigen::Matrix3d m;
    m << 1, -1, 0,
         0, 1, 0,
         2, 0, 1;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 2x3 entera y la retorna */
Eigen::MatrixXd fm::initMatrixAE(){
    Eigen::MatrixXd m(2,3);
      m(0,0)=1;
      m(0,1)=2;
      m(0,2)=2;
      m(1,0)=-2;
      m(1,1)=1;
      m(1,2)=0;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 2x3 entera y la retorna */
Eigen::MatrixXd fm::initMatrixBE(){
    Eigen::MatrixXd m(2,3);
    m << -4, -3, -2,
         -1, 0, -1;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 2x3 entera y la retorna */
Eigen::MatrixXd fm::initMatrixP(){
    Eigen::MatrixXd m(2,3);
    m << 400, 200, 50,
         300, 100, 30;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 3x2 entera y la retorna */
Eigen::MatrixXd fm::initMatrixC(){
    Eigen::MatrixXd m(3,2);
    m(0,0)=25;
    m(0,1)=1;
    m(1,0)=30;
    m(1,1)=1.2;
    m(2,0)=33;
    m(2,1)=1.3;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 3x4 entera y la retorna */
Eigen::MatrixXd fm::initMatrixF1(){
    Eigen::MatrixXd m(3,4);
    m << 2, -1, 0, 7,
         1, 0, 1, 3,
         3, 2, 7, 7;
    return m;
}

/* Funcion que se encarga de asignar valores quemados
 * a una matriz 2x2 entera y la retorna */
Eigen::Matrix2d fm::initMatrixAEI(){
    Eigen::Matrix2d m;
    m << 1, 1,
         3, 4;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 2x2 entera y la retorna */
Eigen::Matrix2d fm::initMatrixBEI(){
    Eigen::Matrix2d m;
    m << 2, 1,
         1, 1;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 2x2 entera y la retorna */
Eigen::Matrix2d fm::initMatrixCEI(){
    Eigen::Matrix2d m;
    m << 1, 2,
         1, 3;
    return m;
}
/* Funcion que se encarga de asignar valores quemados
 * a una matriz 2x2 entera y la retorna */
Eigen::Matrix2d fm::initMatrixIEI(){
    Eigen::Matrix2d m;
    m << 1, 0,
         0, 1;
    return m;
}


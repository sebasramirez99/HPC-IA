/*****************************************************************************
 *
 * Autor: Juan Sebastian Bueno Ramirez
 * Correo: juan.bueno01@correo.usa.edu.co
 * Escuela de Ciencias Exactas e Ingeniería
 * Fecha: 12/03/2022
 * Materia: Optativa 03: HPC para IA
 *
 * Primer Examen Parcial: Ejercicios de Operaciones con Matrices: USO de EIGEN
 *
 */

#include "FUNCIONES/fm.h"
#include <iostream>
#include <eigen3/Eigen/Dense>


typedef Eigen::Matrix<double,2,3> MiMatrix23d;

int main(int argc, char* argv[]){

    /* ExtraccionData extraer(argv[1], argv[2],argv[3]);*/

    fm M(argv[1]);
    //M.muestra(argv[1]);
    std::cout << "holiii"<<std::endl;



    /* Declaracion y asignacion de las matices A Y B por medio de las funciones
     * initMatrixA y initMatrixB
    */
    Eigen::Matrix3i MA = M.initMatrixA();
    Eigen::Matrix3i MB = M.initMatrixB();

    /* Declaracion y asignacion de la matiz AA por medio de la funcion
     * initMatrixAA
    */
    Eigen::Matrix3i MAA = M.initMatrixAA();

    /* Declaracion y asignacion de la matiz I (Matriz Identidad) por medio de la funcion
     * initMatrixI
    */
    Eigen::Matrix3i I = M.initMatrixI();

    /* Declaracion y asignacion de la matiz AA por medio de la funcion
     * initMatrixAA
    */
    Eigen::Matrix3i MAAA = M.initMatrixAAA();

    /* Declaracion y asignacion de la matiz AI por medio de la funcion
     * initMatrixAI
    */
    Eigen::Matrix3d MAI = M.initMatrixAI();

    /* Declaracion y asignacion de la matiz AI por medio de la funcion
     * initMatrixAI
    */
    MiMatrix23d MAE = M.initMatrixAE();
    MiMatrix23d MBE = M.initMatrixBE();


    int whielGeneral = 0;
    do
    {
        std::cout << "***************************************************************************\n"
                     "Juan Sebastian Bueno Ramirez\n"
                     "Escuela de Ciencias Exactas e Ingeniería\n"
                     "Primer Examen Parcial: Ejercicios de Operaciones con Matrices: USO de EIGEN\n"
                     "***************************************************************************\n"
                     ""<<std::endl;
        std::cout << "1) Operaciones básicas con matrices"<<std::endl;
        std::cout << "2) Realiza la siguiente demostración"<<std::endl;
        std::cout << "3) n-ésima potencia de la matriz"<<std::endl;
        std::cout << "4) Matriz inversa"<<std::endl;
        std::cout << "5) Sistema de ecuaciones con matrices"<<std::endl;
        std::cout << "6) Análisis de problemas usando matrices"<<std::endl;
        std::cout << "7) Rango de una matriz"<<std::endl;
        std::cout << "8) Ecuaciones de una incógnita en matrices "<<std::endl;
        std::cout << "9) De un sistema de ecuaciones a una matriz"<<std::endl;
        std::cout << "10) Salir"<<std::endl;
        std::cout << "Ingrese la Opción a ejecutar: ";

        int opcion = 0;
        std::cin >> opcion;
        int whileOperacionesBasicas = 0;
        int opcionOperacionesBasicas = 0;
        switch(opcion)
        {
            int n;
            case 1:
                std::system("clear");
                do{
                    std::cout << "********************************"<<std::endl;
                    std::cout << "Operaciones básicas con matrices \n"<<std::endl;
                    std::cout << "1) A+B"<<std::endl;
                    std::cout << "2) A-B"<<std::endl;
                    std::cout << "3) A.B"<<std::endl;
                    std::cout << "4) B.A"<<std::endl;
                    std::cout << "5) A^t"<<std::endl;
                    std::cout << "6) Salir"<<std::endl;
                    std::cout << "Ingrese la Opción a ejecutar: ";
                    std::cin >> opcionOperacionesBasicas;
                    switch(opcionOperacionesBasicas)
                    {
                        case 1:
                            std::system("clear");
                            std::cout << "1) A+B"<<std::endl;
                            std::cout<<"\n"<< MA+MB <<std::endl<<std::endl;
                            break;
                        case 2:
                            std::system("clear");
                            std::cout << "2) A-B"<<std::endl;
                            std::cout<<"\n"<< MA-MB <<std::endl<<std::endl;
                            break;
                        case 3:
                            std::system("clear");
                            std::cout << "3) A.B"<<std::endl;
                            std::cout<<"\n"<< MA*MB <<std::endl<<std::endl;
                            break;
                        case 4:
                            std::system("clear");
                            std::cout << "4) B.A"<<std::endl;
                            std::cout<<"\n"<< MB*MA <<std::endl<<std::endl;
                            break;
                        case 5:
                            std::system("clear");
                            std::cout << "5) A^t"<<std::endl;
                            std::cout<<"\n"<< MA.transpose() <<std::endl<<std::endl;
                            break;
                        case 6:
                            std::system("clear");
                            std::cout << "6) Salir"<<std::endl;
                            whileOperacionesBasicas = 1;
                            break;
                        default: std::cout << "Usted ha ingresado una opción incorrecta"<<std::endl;
                    }
                }
                while(whileOperacionesBasicas == 0);

                break;
            case 2:
                std::system("clear");
                std::cout << "********************************"<<std::endl;
                std::cout << "Realiza la siguiente demostración\n"<<std::endl;
                std::cout << "Demostrar que: A^2 - A - 2I = 0, siendo: "<<std::endl;
                std::cout<<"\n"<< (MAA*MAA) - MAA - (2*I)<<std::endl<<std::endl;
                break;
            case 3:
                std::system("clear");
                std::cout << "********************************"<<std::endl;
                std::cout << "n-ésima potencia de la matriz\n"<<std::endl;
                std::cout << "Ingrese la potencia que desee (n): "<<std::endl;
                std::cin >> n;
                std::cout<<"\n"<<M.potencia(MAAA,n)<<std::endl<<std::endl;
                break;
            case 4:
                std::system("clear");
                std::cout << "********************************"<<std::endl;
                std::cout << "Matriz inversa\n"<<std::endl;
                std::cout<<"\n"<<MAI.inverse()<<std::endl<<std::endl;
                break;
            case 5:
                std::system("clear");
                std::cout << "********************************"<<std::endl;
                std::cout << "Sistema de ecuaciones con matrices"<<std::endl;
                std::cout << "Ecuaciones :"<<std::endl;
                std::cout << "2A + B = \n\n"<< MAE <<std::endl<<std::endl;
                std::cout << "A - 3B = \n\n"<< MBE <<std::endl<<std::endl;
                std::cout << "Multiplicamos la segunda ecuación por -2 :"<<std::endl;
                std::cout << "2A + B = \n\n"<< MAE <<std::endl<<std::endl;
                std::cout << "-2A + 6B = \n\n"<< MBE*-2 <<std::endl<<std::endl;
                std::cout << "Sumamos miembro a miembro y resolvemos para B :"<<std::endl;
                std::cout << " 7B = \n\n"<< MAE+(MBE*-2) <<std::endl<<std::endl;
                std::cout << "Despejamos a B :"<<std::endl;
                std::cout << " B = \n\n"<< (MAE+(MBE*-2))/7 <<std::endl<<std::endl;
                std::cout << "Si multiplicamos la primera ecuación por 3 y sumando miembro a miembro obtenemos :"<<std::endl;
                std::cout << "7A = \n\n"<< (MAE*3)+MBE <<std::endl<<std::endl;
                std::cout << "Despejamos a A :"<<std::endl;
                std::cout << " A = \n\n"<< ((MAE*3)+MBE)/7 <<std::endl<<std::endl;
                std::cout << "RESPUESTA :"<<std::endl;
                std::cout << " A = \n\n"<< ((MAE*3)+MBE)/7 <<std::endl<<std::endl;
                std::cout << " B = \n\n"<< (MAE+(MBE*-2))/7 <<std::endl<<std::endl;
                break;
            case 6:
                std::system("clear");
                std::cout << "********************************"<<std::endl;

                std::cout << "Matriz de producción: \n Filas: Modelos A, B;   Columnas:  Terminaciones N, L, S\n"<<std::endl;
                std::cout<<"\n"<<MAI.inverse()<<std::endl<<std::endl;
                break;
            case 7:
                std::system("clear");
                std::cout << "********************************"<<std::endl;
                std::cout << "Rango de una matriz\n"<<std::endl;
                std::cout<<"\n"<<MAI.inverse()<<std::endl<<std::endl;
                break;
            case 8:
                std::system("clear");
                std::cout << "********************************"<<std::endl;
                std::cout << "Ecuaciones de una incógnita en matrices\n"<<std::endl;
                std::cout<<"\n"<<MAI.inverse()<<std::endl<<std::endl;
                break;
            case 9:
                std::system("clear");
                std::cout << "********************************"<<std::endl;
                std::cout << "De un sistema de ecuaciones a una matriz\n"<<std::endl;
                std::cout<<"\n"<<MAI.inverse()<<std::endl<<std::endl;
                break;
            case 10:
                std::cout << "Usted ha seleccionado la opción 3";
                whielGeneral = 1;
                break;
            default:
                std::cout << "Usted ha ingresado una opción incorrecta";
        }
    }
    while(whielGeneral == 0);



    return 0;
}

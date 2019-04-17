/**
  LIN Master Application
	
  Company:
    Microchip Technology Inc.

  File Name:
    lin_app.h

  Summary:
    LIN Master Application

  Description:
    This header file provides the interface between the user and 
    the LIN drivers.

 */

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "lin_master.h"

#ifndef LIN_APP_H
#define	LIN_APP_H


typedef enum {
    A = 0x00,
    B = 0x28,
    C = 0x08,
    D = 0x14,
    E = 0x18,
    F = 0x22,
    G = 0x02,
    H = 0x2A,
    I = 0x0A,
    J = 0x19,
    K = 0x1A,
    L = 0x1B,
    M = 0x21,
    N = 0x01,
    O = 0x29,
    P = 0x09,
    Q = 0x34,
    R = 0x35,
    S = 0x15,
    T = 0x20
}lin_cmd_t;

uint8_t A_Data[4] = {0x00, 0x00, 0xF8, 0xFC};
uint8_t B_Data[4] = {0x00, 0x00, 0xF8, 0xFC};
uint8_t C_Data[4] = {0x00, 0x00, 0xF8, 0xFC};
uint8_t D_Data[2] = {0x00, 0x00}; // request for heat data, will be updated later 
uint8_t E_Data[4] = {0x00, 0xFF, 0xFF, 0xFF};
uint8_t F_Data[2];
uint8_t G_Data[2];
uint8_t H_Data[2];
uint8_t I_Data[2];
uint8_t J_Data[2];
uint8_t K_Data[2];
uint8_t L_Data[2];
uint8_t M_Data[4] = {0x00, 0x00, 0xF8, 0xFF};
uint8_t N_Data[4] = {0x00, 0x00, 0xF8, 0xFF};
uint8_t O_Data[4] = {0x00, 0x00, 0xF8, 0xFF};
uint8_t P_Data[4] = {0x00, 0x00, 0xF8, 0xFF};
uint8_t Q_Data[2] = {0xFE, 0xFF}; 
uint8_t R_Data[2];
uint8_t S_Data[4] = {0x00, 0x00, 0x00, 0x00};
uint8_t T_Data[4] = {0x00, 0x00, 0xF8, 0xFC};

const lin_cmd_packet_t scheduleTable[] = {
    //Command, Type, TX/RX Length, Timeout, Period, Data Address
    {A, TRANSMIT, 4, 0, 20, A_Data },
    {B, TRANSMIT, 4, 0, 20, B_Data },
    {C, TRANSMIT, 4, 0, 20, C_Data },
    {D, TRANSMIT, 2, 0, 60, D_Data },
    {E, TRANSMIT, 4, 0, 20, E_Data },
    {F, RECEIVE, 2, 10, 20, F_Data },
    {G, RECEIVE, 2, 10, 20, G_Data },
    {H, RECEIVE, 2, 10, 20, H_Data },
    {I, RECEIVE, 2, 10, 20, I_Data },
    {J, RECEIVE, 2, 10, 60, J_Data },
    {K, RECEIVE, 1, 10, 20, K_Data },
    {L, RECEIVE, 1, 10, 20, L_Data },
    {M, TRANSMIT, 4, 0, 20, M_Data },
    {N, TRANSMIT, 4, 0, 20, N_Data },
    {O, TRANSMIT, 4, 0, 20, O_Data },
    {P, TRANSMIT, 4, 0, 20, P_Data },
    {Q, TRANSMIT, 2, 0, 60, Q_Data },
    {R, RECEIVE, 2, 10, 20, R_Data },
    {S, RECEIVE, 4, 10, 100, S_Data },
    {T, TRANSMIT, 4, 0, 20, T_Data }
};
#define TABLE_SIZE  (sizeof(scheduleTable)/sizeof(lin_cmd_packet_t))

void LIN_Master_Initialize(void);

void processLIN(void);

#endif	/* LIN_APP_H */


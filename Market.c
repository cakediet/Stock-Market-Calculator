#include <stdio.h>

void PrintVfiaxInstructions(void);
float GetVfiaxInput(void);
void PrintTslaInstructions(void);
float GetTslaInput(void);
void PrintZmInstructions(void);
float GetZmInput(void);
void PrintAmznInstructions(void);
float GetAmznInput(void);
void GainLossVfiax(void);
float GainLossInputVfiax(void);
void GainLossTsla(void);
float GainLossInputTsla(void);
void GainLossZm(void);
float GainLossInputZm(void);
void GainLossAmzn(void);
float GainLossInputAmzn(void);
float TotalVfiax(float, float);
float TotalTsla(float, float);
float TotalZm(float, float);
float TotalAmzn(float, float);
float TotalGainLoss(float, float, float, float);

int main(void)

{
        float vfiax;
        float tsla;
        float zm;
        float amzn;
        float netVfiax;
        float netTsla;
        float netZm;
        float netAmzn;
        float vfiaxTotal;
        float tslaTotal;
        float zmTotal;
        float amznTotal;
        float netTotal;


        PrintVfiaxInstructions();
        vfiax = GetVfiaxInput();
        PrintTslaInstructions();
        tsla = GetTslaInput();
        PrintZmInstructions();
        zm = GetZmInput();
        PrintAmznInstructions();
        amzn = GetAmznInput();
        GainLossVfiax();
        netVfiax = GainLossInputVfiax();
        GainLossTsla();
        netTsla = GainLossInputTsla();
        GainLossZm();
        netZm = GainLossInputZm();
        GainLossAmzn();
        netAmzn = GainLossInputAmzn();


        vfiaxTotal = TotalVfiax(vfiax, netVfiax);
        tslaTotal = TotalTsla(tsla, netTsla);
        zmTotal = TotalZm(zm, netZm);
        amznTotal = TotalAmzn(amzn, netAmzn);


        TotalGainLoss(vfiaxTotal, tslaTotal, zmTotal,amznTotal);

        return 0;
}//end of main
void PrintVfiaxInstructions()
{
        printf("Enter how many shares of Vanguard 500 Index Fund Adminral Shares (VFIAX) you own: \n");
        return;
}//end of function
float GetVfiaxInput()
{
        float vfiax = 0.0;
        scanf("%f", &vfiax);
        return vfiax;
}//end of fucntion
void PrintTslaInstructions()
{
        printf("Enter how many shares of Tesla (TSLA) you own: \n");
        return;
}//end of function
float GetTslaInput()
{
        float tsla = 0.0;
        scanf("%f", &tsla);
        return tsla;
}//end of function
void PrintZmInstructions()
{
        printf("Enter how many shares of Zoom (ZM) you own: \n");
        return;
}//end of function
float GetZmInput()
{
        float zm = 0.0;
        scanf("%f", &zm);
        return zm;
}//end of function
void PrintAmznInstructions()
{
        printf("Enter how many shares of Amazon (AMZN) you own: \n");
        return;
}//end of function
float GetAmznInput()
{
        float amzn = 0.0;
        scanf("%f", &amzn);
        return amzn;
}//end of function
void GainLossVfiax()
{
        printf("Enter net gain/loss per share @ market close for Vanguard 500 Index Fund Adminral Shares (VFIAX): \n");
        return;
}//end of function
float GainLossInputVfiax()
{
        float netVfiax = 0.0;
        scanf("%f", &netVfiax);
        return netVfiax;
}//end of function
void GainLossTsla()
{
        printf("Enter net gain/loss per share @ market close for Tesla (TSLA): \n");
        return;
}//end of function
float GainLossInputTsla()
{
        float netTsla = 0.0;
        scanf("%f", &netTsla);
        return netTsla;
}//end of function
void GainLossZm()
{
        printf("Enter net gain/loss per share @ market close for Zoom (ZM): \n");
        return;
}//end of function
float GainLossInputZm()
{
        float netZm = 0.0;
        scanf("%f", &netZm);
        return netZm;
}//end of function
void GainLossAmzn()
{
        printf("Enter net gain/loss per share @ market close for Amazon (AMZN): \n");
        return;
}//end of function
float GainLossInputAmzn()
{
        float netAmzn = 0.0;
        scanf("%f", &netAmzn);
        return netAmzn;
}//end of function
float TotalVfiax(float VanShares,float netVan)
{
        float vanTotal = 0.0;
        float netVfiax = 0.0;
        float vfiax = 0.0;

        vfiax = VanShares;
        netVfiax = netVan;
        vanTotal = netVfiax * vfiax;
        printf("The total gain/loss @ market close for Vanguard 500 Index Fund Adminral Shares (VFIAX) is: $%6.2f\n", vanTotal);

        return vanTotal;
}//end of function
float TotalTsla(float TslaShares, float netFast)
{
        float tslaTotal = 0.0;
        float netTsla = 0.0;
        float tsla = 0.0;

        tsla = TslaShares;
        netTsla = netFast;
        tslaTotal = netTsla * tsla;
        printf("The total gain/loss @ market close for Tesla (TSLA) is: $%6.2f\n", tslaTotal);

        return tslaTotal;
}//end of function
float TotalZm(float ZmShares, float netZoom)
{
        float zmTotal = 0.0;
        float netZm = 0.0;
        float zm = 0.0;

        zm = ZmShares;
        netZm = netZoom;
        zmTotal = zm * netZm;
        printf("The total gain/loss @ market loss for Zoom (ZM) is: $%6.2f\n", zmTotal);

        return zmTotal;
}//end of function
float TotalAmzn(float AmznShares, float netAmazon)
{
        float amznTotal = 0.0;
        float netAmzn = 0.0;
        float amzn = 0.0;

        amzn = AmznShares;
        netAmzn = netAmazon;
        amznTotal = amzn * netAmzn;
        printf("The total gain/loss @ market close for Amazon (AMZN) is: $%6.2f\n", amznTotal);

        return amznTotal;
}//end of function 
float TotalGainLoss(float vfiaxValue, float tslaValue, float zmValue, float amznValue)
{
        float Total = 0.0;
        float vfiaxTotal = 0.0;
        float tslaTotal = 0.0;
        float zmTotal = 0.0;
        float amznTotal = 0.0;

        vfiaxTotal = vfiaxValue;
        tslaTotal = tslaValue;
        zmTotal = zmValue;
        amznTotal = amznValue;
        Total = vfiaxTotal + tslaTotal + zmTotal + amznTotal;
        printf("The total gain/loss for the day is: $%6.2f\n", Total);

        return Total;
}//end of function                                                                                                                                                                                 
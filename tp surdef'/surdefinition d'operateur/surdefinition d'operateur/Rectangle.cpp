#include "Rectangle.h"
#include <iostream>
using namespace std;

CRectangle::CRectangle(){}
CRectangle::~CRectangle(){}
float CRectangle::GetLargeur(){ return m_Largeur; }
float CRectangle::GetLongueur(){ return m_Longueur; }
void CRectangle::SetLongueur(float L){ m_Longueur = L; }
void CRectangle::SetLargeur(float l){ m_Largeur = l; }
void CRectangle::SetRectangle(float L, float l){ SetLongueur(L), SetLargeur(l); }
float CRectangle::CalculSurface()
{
	float sommes;
	sommes = m_Largeur*m_Longueur;
	return sommes;
}

CRectangle CRectangle::operator+(CRectangle &r)
{
	CRectangle r3;
	r3.SetLargeur(r.GetLargeur() + m_Largeur);
	r3.SetLongueur(r.GetLongueur() + m_Longueur);
	return r3;
}

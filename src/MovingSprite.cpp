#include "MovingSprite.h"

// 5.1.1 ������ 4 �����ռ�������
// p21 using namespace
using namespace CPPClass;

//p117 ����๹�캯�������һ����ʽ
CPPClass::MovingSprite::MovingSprite( 
	ofPoint Pos /*= ofPoint(0)*/, 
	ofVec2f Vel /*= ofVec2f(0,1)*/, 
	ofVec2f Size/*=ofVec2f(20,20)*/, 
	ofImage* I/*=NULL*/,
	int Score /*= 1*/ ) :
	pos(Pos),size(Size),velocity(Vel),score(Score),img(I)
{}

void CPPClass::MovingSprite::setVelocity( ofVec2f v )
{
	velocity = v;
}

ofVec2f CPPClass::MovingSprite::getVelocity()
{
	return velocity;
}

void CPPClass::MovingSprite::accelerate( ofVec2f acc )
{
	// �ٶȸı�
	velocity += acc;
	// �����������Ϊ10
	velocity.limit(10); 
}


void CPPClass::MovingSprite::draw()
{
	// ��ʾ�Լ�������
	if(img==NULL)
	{
		ofSetRectMode(OF_RECTMODE_CENTER);
		ofRect(pos.x,pos.y,size.x,size.y);
	}
	else
	{
		ofRectangle R;
		R.setFromCenter(pos,size.x,size.y);
		img->draw(R);
	}
}

void CPPClass::MovingSprite::update()
{
	// λ�ñ仯
	pos += velocity;
}

void CPPClass::MovingSprite::setPosition( ofPoint P )
{
	pos = P;
}

ofPoint CPPClass::MovingSprite::getPosition()
{
	return pos;
}

void CPPClass::MovingSprite::move( ofVec2f Trans )
{
	pos += Trans;
}

ofVec2f CPPClass::MovingSprite::getSize()
{
	return size;
}

ofImage* CPPClass::MovingSprite::getImage()
{
	return img;
}

void CPPClass::MovingSprite::setSize( ofVec2f s )
{
	size = s;
}

void CPPClass::MovingSprite::resist( float r /*= 0.99f*/ )
{
	velocity *= r;
}

ofRectangle CPPClass::MovingSprite::getRect()
{
	ofPoint P = pos;
	ofRectangle R;
	R.setFromCenter(P,size.x,size.y);
	return R;
}

int CPPClass::MovingSprite::getScore()
{
	return score;
}




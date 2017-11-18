// �����ظ��������ļ�
#pragma once 

// 5.6.4 ����Ԥ���� ��ֹͷ�ļ����ظ�����
#ifndef $HUNTINGSPRITE_H$  
#define $HUNTINGSPRITE_H$

#include "ofMain.h"
#include "MovingSprite.h"

// 5.1.1 ������ 4 �����ռ�������
namespace CPPClass
{	
	// 4.2.1 ��Ķ��� 
	class HuntingSprite: 
		// 7.2.1 ���м̳�
		public MovingSprite  
	{
	// 4.2.2 ���Ա�ķ��ʿ��ƣ�����
	public: 
		// 4.3.1 ���캯��
		HuntingSprite(  
			MovingSprite* Target,  // 6.2.11 ����ָ��
			ofPoint Pos = ofPoint(0),  // 3.3 Ĭ���β�
			ofVec2f Vel = ofVec2f(0,1),  
			ofVec2f Size=ofVec2f(20,20), 
			float Agility = 1.0f, 
			ofImage* I=NULL, // 6.2.11 ����ָ�룬 p204 NULLָ��
			int Score = 2);		

		//8.3.1 һ���麯����Ա������
		virtual void update(); 

		// 4.2.2 ���Ա�ķ��ʿ��ƣ� ˽��
	private: 
		void turnToTarget();

	private:
		float agility; 
		// 6.2.11 ����ָ��
		MovingSprite* target; 
	};
}


#endif
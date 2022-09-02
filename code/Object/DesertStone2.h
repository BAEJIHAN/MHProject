#pragma once
#include "GameObject\GameObject.h"
#include "Component/StaticMeshComponent.h"
#include "Component/ColliderBox3D.h"
class CDesertStone2 :
	public CGameObject
{
	friend class CScene;

protected:
	CDesertStone2();
	CDesertStone2(const CDesertStone2& obj);
	virtual ~CDesertStone2();

private:
	CSharedPtr<CStaticMeshComponent>    m_Mesh;
	CSharedPtr<CColliderBox3D>		m_ColliderBox;

public:
	virtual bool Init();
	virtual void Update(float DeltaTime);
	virtual void PostUpdate(float DeltaTime);
	virtual CDesertStone2* Clone();
};


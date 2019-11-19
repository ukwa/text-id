#a<a.a>N
#a<a.a>N
a a a;N
a a Aa_Aa {N
	a a;N
	Aa *Aa;N
	Aa* Aa;N
N
}Aa;N
a Aa* AaAa;N
//在二叉搜索树里返回值为a的结点的地址(递归)N
AaAa Aa(AaAa a, a a)N
{N
	a (!a)N
		a A;//空树,没有找到N
	a a (a > a->a)N
		Aa(a->Aa, a);N
	a a (a < a->a)N
		Aa(a->Aa, a);N
	a a (a == a->a)N
		a a;N
}N
//在二叉搜索树里返回值为a的结点的地址(非递归)N
AaAa Aa0(AaAa a, a a)N
{N
	a (a)//当树不为空的时候一直查找N
	{N
		a (a > a->a)N
			a = a->Aa;N
		a a (a < a->a)N
			a = a->Aa;N
		aN
			a a;N
	}N
	a A; N
}N
//在二叉搜索树里返回最小值结点的地址(递归)N
AaAa AaAa(AaAa a)N
{N
	a (!a)//空树返回AN
		a A;N
	a a (!a->Aa)//如果左子树为空就找到了N
		a a;N
	aN
		a AaAa(a->Aa);//继续查找左子树N
}N
//在二叉搜索树里返回最大值结点的地址(非递归)N
AaAa AaAa(AaAa a)N
{N
	a (a)//现判断a是否为空N
	{N
		a (a->Aa != A)N
		{N
			a = a->Aa;N
		}N
	}N
	a a;N
}N
//二叉搜索树的插入操作N
AaAa Aa(AaAa a, a a)N
{N
	a (a == A)//树为空树N
	{N
		a = (AaAa)a(a(Aa));N
		a->a = a;N
		a->Aa = A;N
		a->Aa = A;N
	}N
	aN
	{N
		a (a < a->a)N
		{N
			a->Aa = Aa(a->Aa, a);//递归插入左子树N
		}N
		a a (a > a->a)N
		{N
			a->Aa = Aa(a->Aa, a);//递归插入右子树N
		}N
		aN
		{N
			;//如果等于的话啥也不做N
		}N
			N
	}N
	a a;N
}N
//二叉搜索树的删除操作N
AaAa Aa(AaAa a, a a)N
{N
	AaAa a = A;N
	a (a == A)N
		a("要删除的元素未找到!\a");N
	aN
	{N
		//先找到要删除的元素N
		a (a < a->a)N
			a->Aa = Aa(a->Aa, a);N
		a a (a > a->a)N
			a->Aa = Aa(a->Aa, a);N
		a//找到了N
		{N
			//如果被删除结点有两个子结点N
			a (a->Aa&&a->Aa)N
			{N
				a = AaAa(a->Aa);//找到右子树中的最小值N
				a->a = a->a;N
				a->Aa = Aa(a->Aa, a->a);N
			}N
			//如果被删除的结点有一个子结点或没有子节点N
			aN
			{N
				a = a;N
				a (!a->Aa)//只有右子节点或无子结点N
					a = a->Aa;N
				a //只有左子节点N
					a = a->Aa;N
				a(a);N
			}N
		}N
	}N
	a a;N
}N
a a()N
{N
	N
	a 0;N
}
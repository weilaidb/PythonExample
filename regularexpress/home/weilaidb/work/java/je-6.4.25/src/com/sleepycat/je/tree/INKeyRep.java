package com.sleepycat.je.tree;
import java.util.Comparator;
import com.sleepycat.je.dbi.DupKeyData;
import com.sleepycat.je.dbi.MemoryBudget;
import com.sleepycat.je.evictor.Evictor;
import com.sleepycat.je.utilint.SizeofMarker;
public abstract class INKeyRep
extends INArrayRep<INKeyRep, INKeyRep.Type, byte[]>

package je.gettingStarted;
import java.io.IOException;
import com.sleepycat.bind.tuple.TupleBinding;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.SecondaryDatabase;
import com.sleepycat.je.SecondaryKeyCreator;
public class ItemNameKeyCreator implements SecondaryKeyCreator

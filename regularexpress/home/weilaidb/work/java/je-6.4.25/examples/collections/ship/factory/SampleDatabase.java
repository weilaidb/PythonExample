package collections.ship.factory;
import java.io.File;
import com.sleepycat.bind.serial.StoredClassCatalog;
import com.sleepycat.collections.TupleSerialFactory;
import com.sleepycat.je.Database;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.ForeignKeyDeleteAction;
import com.sleepycat.je.SecondaryConfig;
import com.sleepycat.je.SecondaryDatabase;
public class SampleDatabase

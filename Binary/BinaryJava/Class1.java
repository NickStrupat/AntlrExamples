
import org.antlr.v4.runtime.ParserRuleContext;
import org.antlr.v4.runtime.tree.ErrorNode;
import org.antlr.v4.runtime.tree.TerminalNode;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import org.antlr.v4.gui.TreeViewer;
import org.antlr.v4.runtime.ANTLRInputStream;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CodePointCharStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;
import org.antlr.v4.runtime.misc.Interval;

public class Class1 extends BinaryBaseListener {

    private boolean changed = false;

    @Override
    public void exitParExpr(BinaryParser.ParExprContext ctx) {
	final CharStream input = ctx.start.getInputStream();

	if (!changed) {
	    final int a = ctx.start.getStartIndex();
	    final int b = ctx.stop.getStopIndex();

	    final Interval interval = new Interval(a, b);

	    final String branch = input.getText(interval);


	    // Simplifying value in "branch"
	    // If "branch" value changes, make "changed" variable true
	}

	System.out.println(
			"Start " + ctx.start.getStartIndex()
			+ " Stop " + ctx.stop.getStopIndex()
			+ " "
			+ input.getText(new Interval(ctx.start.getStartIndex(), ctx.stop.getStopIndex())));
    }

}

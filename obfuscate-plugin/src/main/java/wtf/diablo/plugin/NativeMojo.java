package wtf.diablo.plugin;

import org.apache.maven.execution.MavenSession;
import org.apache.maven.plugin.AbstractMojo;
import org.apache.maven.plugin.MojoExecutionException;
import org.apache.maven.plugins.annotations.LifecyclePhase;
import org.apache.maven.plugins.annotations.Mojo;
import org.apache.maven.plugins.annotations.Parameter;
import org.apache.maven.project.MavenProject;

@Mojo(name = "parse-build-file", defaultPhase = LifecyclePhase.INITIALIZE)
public class NativeMojo extends AbstractMojo {

    @Parameter(defaultValue = "${project}", readonly = true)
    private MavenProject project;

    @Parameter(defaultValue = "${session}", readonly = true)
    private MavenSession session;

    public void execute() throws MojoExecutionException {
        getLog().info("Parsing build file: " + project.getFile().getAbsolutePath());
        getLog().info("Project artifact ID: " + project.getArtifactId());
    }
}

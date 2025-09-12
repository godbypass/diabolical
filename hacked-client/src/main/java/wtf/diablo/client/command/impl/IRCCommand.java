package wtf.diablo.client.command.impl;

import wtf.diablo.client.command.api.AbstractCommand;
import wtf.diablo.client.command.api.data.Command;

@Command(
        name = "irc",
        description = "allows you to connect to an irc server",
        usage = "irc <message>"
)
public class IRCCommand extends AbstractCommand {

    @Override
    public void execute(String[] args) {
    }
}

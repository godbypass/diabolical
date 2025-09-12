package wtf.diablo.client.command.impl;

import wtf.diablo.client.command.api.AbstractCommand;
import wtf.diablo.client.command.api.data.Command;

@Command(name = "online", description = "Shows the online players")
public final class OnlineCommand extends AbstractCommand {

    @Override
    public void execute(String[] args) {
//        final IrcClient client = Diablo.getInstance().getModuleRepository().getModuleInstance(IRCModule.class).getIrcClient();

//        if (client == null) {
//            return;
//        }
//
//        client.queryUsersOnline();
    }
}

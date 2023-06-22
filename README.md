
The motivation behind the project is to provide a native desktop app for [Matrix] that
feels more like a mainstream chat app ([Element], Telegram etc) and less like an IRC client.

### Note regarding End-to-End encryption

The current implementation is mostly stable, but it was never audited. If you
rely on it for security, we can't make any guarantees.

## Features

Most of the features you would expect from a chat application are missing right now
but we are getting close to a more feature complete client.
Specifically there is support for:
- E2E encryption.
- VoIP calls (voice & video).
- User registration.
- Creating, joining & leaving rooms.
- Sending & receiving invites.
- Sending & receiving files and emoji (inline widgets for images, audio and file messages).
- Replies with text, images and other media (and actually render them as inline widgets).
- Typing notifications.
- Username auto-completion.
- Message & mention notifications.
- Redacting messages.
- Read receipts.
- Basic communities support.
- Room switcher (ctrl-K).
- Light, Dark & System themes.
- Creating separate profiles (command line only, use `-p name`).
- D-Bus API to allow integration with third-party plugins (does not support Windows or macOS).

